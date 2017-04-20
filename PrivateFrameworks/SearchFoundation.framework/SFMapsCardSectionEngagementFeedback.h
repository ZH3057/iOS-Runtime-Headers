/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFMapsCardSectionEngagementFeedback : SFCardSectionEngagementFeedback <SFProtobufObject> {
    int  _feedbackType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int feedbackType;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PBCodable *protobufMessage;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (int)feedbackType;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedbackType:(int)arg1;
- (void)setFeedbackType:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (Class)protobufClass;

- (id)protobufMessage;

@end