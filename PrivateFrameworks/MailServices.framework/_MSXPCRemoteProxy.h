/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSXPCInterface, MSXPCConnection;

@interface _MSXPCRemoteProxy : NSObject  {
    int _selectorLock;
    struct __CFDictionary { } *_knownSelectors;
    MSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

}


- (id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end