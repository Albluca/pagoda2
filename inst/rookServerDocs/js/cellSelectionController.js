"use strict";
/*
 *
 * The selection cotroller is responsible for keeping
 * track of cell selections. The selections are kept as
 * names objects in an array and they are themselves arrays of
 * text labels of cells
 *
 * Some selection names have special meanings, but this is
 * not otherwise enforced:
 *
 * currentPrimarySel -- the current selection of cells
 * currentSecondarySel -- the current secondary selection of cells
 *                        when one is needed, such as when selecting
 *                        two dendrogram branches
 *
 */

/**
 * Keeps track of cell seletions
 * @constructor
 */
function cellSelectionController() {
    if (typeof cellSelectionController.instance === 'object') {
	return cellSelectionController.instance;
    }

    // Generat the array to keep the selections in
    this.selections = new Object();
    this.highlights = ["#FF0097","#A200FF","#00ABA9","#8CBF26","#A05000","#E671B8","#F09609","#1BA1E2","#E51400","#339933","#FFFF00","#8F0012","#E30181","#B3773C","#C76306","#ABDBB0","#8F0012","#FADC50","#E490B5","#AFD0F4","#8ED0BB","#39FA61","#B56194","#8DDE06","#C1BC76"];
    cellSelectionController.instance = this;
};

/**
 * Sets a cell selection
 * @param {string} selectionName A name for this cell selection
 * @param {Array[]} cells identifiers of the cells for this selection
 * @param {string} displayName Name to show in the UI when refering to this selection
 * @param {object} metadata any kind of metadata we want to attach to this cell selection
 * @param {color} color of the cells when highlighted. If not specified random color is chosen
 */
cellSelectionController.prototype.setSelection = function(selectionName, cells, displayName, metadata, color ) {
    if(typeof color === "undefined"){
      color = this.highlights[Math.floor(Math.random()* this.highlights.length)];
    }
     if (typeof displayName === 'undefined') {
	    displayName = selectionName;
    }

    this.selections[selectionName] = {
	'name': selectionName,
	'cells': cells,
	'displayName': displayName,
	'metadata': metadata,
	'color' : color
    };
    this.raiseSelectionChangedEvent();
};


/**
 * Raise an event for notifying that the cell selectiion has changed
 * @private
 */
cellSelectionController.prototype.raiseSelectionChangedEvent = function() {
    // TODO: buffer this
      // Notify the world that a new selection has been set
    var evtBus = new eventBus();
    evtBus.publish("cell-selection-updated");
}

/**
 * Get the names of the currently available selections
 */
cellSelectionController.prototype.getAvailableSelections = function() {
    var names = [];
    for (var sel in this.selections) {
	names.push(this.selections[sel].name);
    }

    return names;
};

/**
 * Delete a cell selection
 * @param {string} selectionName the name of the selection to delete
 */
cellSelectionController.prototype.deleteSelection = function(selectionName) {

    delete this.selections[selectionName];
this.raiseSelectionChangedEvent();
}

/**
 * Get a cell selection
 * @param {string} selectionName the internal name of the cell selection
 * @returns {Array[]} Identifiers of the cells in this selection
 */
cellSelectionController.prototype.getSelection = function(selectionName) {
    var sel =  this.selections[selectionName];
    if (typeof sel !== 'undefined') {
	return sel.cells;
    } else {
	return undefined;
    }
};

/**
 * Get a cell selection's highlight color
 * @param {string} selectionName the internal name of the cell selection
 * @returns {string} color corresponding to the selected selection
 */
cellSelectionController.prototype.getColor = function(selectionName){
  var sel =  this.selections[selectionName];
    if (typeof sel !== 'undefined') {
	return sel.color;
    } else {
	return undefined;
    }
};
/**
 * Sets a cell selection's highlight color
 * @param {string} selectionName the internal name of the cell selection
 * @param {string} desired new highlight color
 */
cellSelectionController.prototype.setColor = function(selectionName, newColor){

  this.selections[selectionName].color =  newColor;
  this.raiseSelectionChangedEvent();

}
/**
 * get the display name of a cell selection
 * @param selectionName the internal name of the selection
 * @retuns the display name of the selection
 */
cellSelectionController.prototype.getSelectionDisplayName = function(selectionName) {
    var sel =  this.selections[selectionName];
    if (typeof sel !== 'undefined') {
	return sel.displayName;
    } else {
	return undefined;
    };
};

/**
 * Create a new cell selection by duplicating an existing one
 * @param selectionName {string} name of the selection to duplicate
 * @param newSelectionName {string} name of the new selection to make
 * @param newSelectionDisplayName {string} display name of the new selection
 */
cellSelectionController.prototype.duplicateSelection = function(selectionName,
								newSelectionName,
								newSelectionDisplayName) {
    var oldSelection = this.selections[selectionName];
    var sel = {};

    sel.name = newSelectionName;
    sel.displayName = newSelectionDisplayName;
    sel.color = this.highlights[Math.floor(Math.random()*this.highlights.length)];
    sel.cells = JSON.parse(JSON.stringify(oldSelection.cells));

    this.selections[newSelectionName] = sel;
    this.raiseSelectionChangedEvent();
}

/**
 * Rename a cell selection, only change the display name
 */
cellSelectionController.prototype.renameSelection = function(selectionName, newSelectionName) {
    // TODO check tha the new selection name does not already exist
    this.selections[selectionName].displayName =  newSelectionName;
    this.raiseSelectionChangedEvent();
}


/**
 * Generate a new cell selection from two existing cell selections
 */
cellSelectionController.prototype.mergeSelectionsIntoNew = function(selections, newSelectionName, newSelectionDisplayName)  {

    var cellSelCtrl = new cellSelectionController();
    var sel = {};
    sel.name = newSelectionName;
    sel.displayName = newSelectionDisplayName;
    sel.color = this.highlights[Math.floor(Math.random()*this.highlights.length)];

    var cells = {};
    selections.forEach(function(selection){
      cellSelCtrl.getSelection(selection).forEach(function(cell){
        cells[cell] = true;
      })
    });
    sel.cells = Object.keys(cells);
    
    this.selections[newSelectionName] = sel;
    this.raiseSelectionChangedEvent();
}

/**
 * Genereate a new cell selection by intersecting two cell selections
 */
cellSelectionController.prototype.intersectSelectionsIntoNew = function(selections, newSelectionName, newSelectionDisplayName){

    var cellSelCtrl = this;
    var sel = {};
    sel.name = newSelectionName;
    sel.displayName = newSelectionDisplayName;
    sel.color = this.highlights[Math.floor(Math.random()*this.highlights.length)];
    
    var cells = {};
    cellSelCtrl.getSelection(selections[0]).forEach(function(cell){
      cells[cell] = 1; 
    });
    for(var i = 1; i< selections.length; i++){
      cellSelCtrl.getSelection(selections[i]).forEach(function(cell){
        if(cells[cell]){
          cells[cell]++;
        }
      });
    }
    sel.cells = [];
    
    for(cell in cells){
      if(cells[cell] === selections.length){
        sel.cells.push(cell);
      }
    }
    
    this.selections[newSelectionName] = sel;
    this.raiseSelectionChangedEvent();
}





function colorManager(){
  if(typeof colorManager.instance == "Object"){
    return colorManager.instance;
  }
  
  this.usedColors = [];
  
  
  colorManager.instance = this;
}
colorManager.prototype.generateColor = function(){
  
  if(this.usedColors.length === 0){
    var randomColor = Math.floor(Math.random() * 360);
    this.usedColors.push({h: randomColor, f: 1});
    return randomColor;
  }
  if(this.usedColors.length === 360){
    var randomColor = Math.floor(Math.random() * 360);
    this.usedColors[randomColor].f++;
    return randomColor;
  }
  
  var distPair = {
    p: null,
    i: null,
    d: 0
  };
  
  for(var i = 0; i < this.usedColors.length; i++){
    var prev = this.usedColors[(i-1 + this.usedColors.length) % this.usedColors.length];
    var next = this.usedColors[i];
    var dist = 360 - ((prev.h - next.h + 360) % 360);
    if(distPair.d < dist){
      distPair.d = dist;
      distPair.p = prev.h;
      distPair.i = i;
    }
  }
  
  var newColor = {
    h: (Math.floor(distPair.d/2) + distPair.p)%360,
    f: 1
  }
  if(distPair.i === 0 && newColor.h > this.usedColors[0].h){
    this.usedColors.push(newColor);
  }
  else{
    this.usedColors.splice(i,0,Array(newColor));
  }
  return newColor.h;
}

colorManager.prototype.addColorByHex = function(hexColor){
  var targetHue = this.hsv2hex(hexColor).h;
  
  var index = 0;
  
  while(index < this.usedColors.length && this.usedColors[index].h < targetHue){index++;}
  
  if(this.usedColors[index].h === targetHue){
    this.usedColors[index].f++;
  }
  else{
    this.usedColors.splice(i,0,Array({
      h: targetHue,
      f: 1
    }));
  }
}
colorManager.prototype.removeColorByHex = function(hexColor){
  var targetHue = this.hsv2hex(hexColor).h;
  
  var index = 0;
  
  while(index < this.usedColors.length && this.usedColors[index].h < targetHue){index++;}
  
  if(this.usedColors[index].h === targetHue){
    this.usedColors[index].f--;
    if(this.usedColors[index].f === 0){
      this.usedColors.splice(i,1)
    }
  }
}

colorManager.prototype.hex2hsv = function(hexInput){
  var result = /^#?([a-f\d]{2})([a-f\d]{2})([a-f\d]{2})$/i.exec(hexInput);
  var x = result ? {
        r: parseInt(result[1], 16),
        g: parseInt(result[2], 16),
        b: parseInt(result[3], 16)
    } : null;
  
  if(result){
    var rprime = x.r/255;
    var gprime = x.g/255;
    var bprime = x.b/255;
    var cmin = Math.min(rprime,gprime,bprime);
    var cmax = Math.max(rprime,gprime,bprime);
    var delta = cmax-cmin;
    var hsv = {};
    if(cmax == rprime){
      hsv.h = 60 * (((gprime-bprime)/delta + 6) % 6)
    }
    else if(cmax == gprime){
      hsv.h = 60 * ((bprime-rprime)/delta + 2)
    }
    else if(cmax == bprime){
      hsv.h = 60 * ((rprime-gprime)/delta + 4)
    }
    hsv.s = (cmax === 0 ? 0 : (delta/cmax));
    hsv.v = cmax;
    return hsv;
  }
  else{
    return null;
  }
}

colorManager.prototype.hsv2hex =  function(h, s, v) {
    var r, g, b, i, f, p, q, t;
    if (arguments.length === 1) {
        s = h.s, v = h.v, h = h.h;
    }
    h = (h%360)/360;
    i = Math.floor(h * 6);
    f = h * 6 - i;
    p = v * (1 - s);
    q = v * (1 - f * s);
    t = v * (1 - (1 - f) * s);
    switch (i % 6) {
        case 0: r = v, g = t, b = p; break;
        case 1: r = q, g = v, b = p; break;
        case 2: r = p, g = v, b = t; break;
        case 3: r = p, g = q, b = v; break;
        case 4: r = t, g = p, b = v; break;
        case 5: r = v, g = p, b = q; break;
    }
    return "#" + Math.round(r * 255).toString(16) + Math.round(g * 255).toString(16) + Math.round(b * 255).toString(16);
}



