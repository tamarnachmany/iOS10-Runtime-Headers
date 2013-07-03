/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLServiceVendor : NSObject  {
}

+ (BOOL)isServiceRunning:(id)arg1;
+ (BOOL)isServiceEnabled:(id)arg1;
+ (void)retireServiceWithName:(id)arg1;
+ (id)getServiceWithName:(id)arg1;
+ (BOOL)getKeyClass:(Class*)arg1 andSilo:(id*)arg2 forServiceWithName:(id)arg3;
+ (void)rereadConfiguration;
+ (id)proxyForService:(id)arg1;
+ (id)getSiloForService:(id)arg1;
+ (BOOL)ensureServiceIsRunning:(id)arg1;
+ (void)initialize;


@end