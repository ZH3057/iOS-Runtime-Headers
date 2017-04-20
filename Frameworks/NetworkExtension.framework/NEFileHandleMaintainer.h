/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFileHandleMaintainer : NSObject {
    NSObject<OS_xpc_object> * _auxiliaryDataDictionary;
    BOOL  _changed;
    NSString * _eventName;
    NSMutableArray * _fileHandles;
    BOOL  _isOwnerMode;
    id /* block */  _receivedHandlesCallback;
}

@property (retain) NSObject<OS_xpc_object> *auxiliaryDataDictionary;
@property BOOL changed;
@property (retain) NSString *eventName;
@property (retain) NSMutableArray *fileHandles;
@property BOOL isOwnerMode;
@property (copy) id /* block */ receivedHandlesCallback;

+ (id)sharedMaintainer;

- (void).cxx_destruct;
- (id)auxiliaryDataDictionary;
- (BOOL)changed;
- (void)commit;
- (id)copyAuxiliaryDataForKey:(id)arg1;
- (id)createEvent;
- (id)eventName;
- (id)fileHandles;
- (id)init;
- (BOOL)isOwnerMode;
- (void)iterateFileHandlesWithBlock:(id /* block */)arg1;
- (id /* block */)receivedHandlesCallback;
- (void)removeFileHandleMatchingPredicate:(id /* block */)arg1;
- (void)resetFileHandlesFromEvent:(id)arg1;
- (void)setAuxiliaryData:(id)arg1 forKey:(id)arg2;
- (void)setAuxiliaryDataDictionary:(id)arg1;
- (void)setChanged:(BOOL)arg1;
- (void)setEventName:(id)arg1;
- (void)setFileHandle:(id)arg1 matchingPredicate:(id /* block */)arg2;
- (void)setFileHandles:(id)arg1;
- (void)setIsOwnerMode:(BOOL)arg1;
- (void)setReceivedHandlesCallback:(id /* block */)arg1;
- (void)startOwnerModeWithEventName:(id)arg1 handlesReceivedCallback:(id /* block */)arg2;

@end