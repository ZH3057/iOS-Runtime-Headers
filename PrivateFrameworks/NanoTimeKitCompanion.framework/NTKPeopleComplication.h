/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPeopleComplication : NTKComplication {
    NSString * _abbreviation;
    NSString * _contactID;
    NSString * _fullName;
    NSString * _shortName;
}

@property (nonatomic, readonly) NSString *abbreviation;
@property (nonatomic, readonly) NSString *contactID;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *shortName;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)abbreviation;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)contactID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKey;
- (void)encodeWithCoder:(id)arg1;
- (id)fullName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)shortName;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end