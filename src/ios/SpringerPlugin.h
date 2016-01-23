//
//  SpringerPlugin.h
//
//
//  Created by Nitin/Jitendra on 12-06-13.

#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

@interface SpringerPlugin : CDVPlugin {
    
}

+ (void) callArticlePage:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

- (void) movePageHandler:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) callWebBrowserHomePage:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) callArticlePage:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) callWebBrowserPage:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) callOfflinePDF:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) startLoader:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) stopLoader:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) callback:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

@end
