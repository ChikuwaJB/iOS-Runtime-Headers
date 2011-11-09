/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotificationCenter : NSObject  {
    void *_impl;
    void *_callback;
    void *_pad[11];
}

+ (id)defaultCenter;
+ (void)_postNotificationName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)finalize;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;
- (void)postNotification:(id)arg1;
- (BOOL)isEmpty;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (id)description;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationOnMainThreadWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)__mainThreadPostNotification:(id)arg1;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationNameOnMainThread:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)postNotificationNameOnMainThreadHandler:(id)arg1;

@end