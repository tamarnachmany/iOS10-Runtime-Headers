/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTSpringboardStartMonitor : VTEventMonitor {
    int  _notifyToken;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didReceiveSpringboardStarted:(bool)arg1;
- (void)_didReceiveSpringboardStartedInQueue:(bool)arg1;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isSpringboardStarted;
- (void)removeObserver:(id)arg1;

@end
