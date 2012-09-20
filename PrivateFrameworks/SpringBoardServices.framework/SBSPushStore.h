/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString, NSHashTable;

@interface SBSPushStore : NSObject  {
    NSString *_bundleID;
    NSHashTable *_observers;
}

+ (void)initialize;
+ (void)setEffectivePushSettings:(unsigned int)arg1 forBundleID:(id)arg2;
+ (unsigned int)effectivePushSettingsForBundleID:(id)arg1;
+ (id)allNotificationEnabledBundleIDs;
+ (id)bundleIDsWithUpdatesSince:(id)arg1;
+ (id)uniqueIdentifierForNotification:(id)arg1;
+ (id)pushStoreForBundleID:(id)arg1;
+ (id)notificationsForBundleID:(id)arg1;

- (void)addObserver:(id)arg1;
- (id)initWithBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (id)storedNotifications;
- (void)notifyPushDeliveryAccepted;
- (void)notifyPushSettingsChanged;
- (void)notifyPushStoreCleared;
- (void)notifyPushStoreUpdated;

@end