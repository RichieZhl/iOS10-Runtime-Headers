/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSString;

@interface SLAbsintheSigningSession : NSObject  {
    NSString *_certURL;
    NSString *_sessionURL;
}


- (BOOL)establish;
- (id)_urlEncodedString:(id)arg1;
- (id)signatureForData:(id)arg1;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;

@end