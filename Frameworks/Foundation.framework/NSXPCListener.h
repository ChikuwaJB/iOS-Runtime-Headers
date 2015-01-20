/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSXPCListenerDelegate>, NSObject<OS_dispatch_queue>, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {
    <NSXPCListenerDelegate> *_delegate;
    id _reserved1;
    id _reserved2;
    NSString *_serviceName;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_userQueue;
    void *_xconnection;
    void *reserved0;
}

@property <NSXPCListenerDelegate> * delegate;
@property(retain,readonly) NSXPCListenerEndpoint * endpoint;

+ (id)_UUID;
+ (id)anonymousListener;
+ (void)enableTransactions;
+ (id)serviceListener;

- (id)_initShared;
- (id)_queue;
- (void)_setQueue:(id)arg1;
- (id)_xpcConnection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)endpoint;
- (void)finalize;
- (id)initCellularPlanDatabaseServer;
- (id)initVinylTestServer;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (void)invalidate;
- (void)resume;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)stop;
- (void)suspend;

@end