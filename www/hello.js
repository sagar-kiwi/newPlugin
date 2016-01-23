/*global cordova, module*/

module.exports = {
    movePageHandler : function(direction) {

	var args = {};
	if(direction)
		args.direction = direction;
	cordova.exec(null, null, "Hello", "movePageHandler", [args]);
}

callWebBrowserHomePage : function() {
    
    var args = {};
	cordova.exec(null, null, "Hello", "callWebBrowserHomePage", [args]);
}

callArticlePage : function() {
    
    var args : {};
	cordova.exec(null, null, "Hello", "callArticlePage", [args]);
}

callWebBrowserPage : function() {
    
    var args = {};
	cordova.exec(null, null, "Hello", "callWebBrowserPage", [args]);
}

callOfflinePDF : function(filePath) {
    
    var args = {};
	if(filePath)
		args.filePath = filePath;
	cordova.exec(null, null, "Hello", "callOfflinePDF", [args]);
}

startLoader: function() {
    
    var args = {};
	cordova.exec(null, null, "Hello", "startLoader", [args]);
}

stopLoader : function() {
    
    var args = {};
	cordova.exec(null, null, "Hello", "stopLoader", [args]);
}

callback : function() {
    
    var args = {};
	cordova.exec(null, null, "Hello", "callback", [args]);
}
}

