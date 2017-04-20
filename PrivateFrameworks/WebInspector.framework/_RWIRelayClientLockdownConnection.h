/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWIRelayClientLockdownConnection : _RWIRelayClientConnection {
    struct _lockdown_connection { } * _connection;
    NSMutableData * _incomingData;
    NSThread * _readThread;
}

+ (id)connectionFromLockdownCheckinWithInfo:(void*)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)_disconnectFromWithinReadThread;
- (void)dealloc;
- (id)initWithLockdownConnection:(struct _lockdown_connection { }*)arg1 delegate:(id)arg2;
- (void)readFromService;
- (void)sendMessage:(id)arg1;
- (void)startListening;

@end