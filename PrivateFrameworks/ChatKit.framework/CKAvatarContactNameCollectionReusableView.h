/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView {
    int  _style;
    UILabel * _titleLabel;
}

@property (nonatomic) int style;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (void)configureWithEntity:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStyle:(int)arg1;
- (void)setTitleLabel:(id)arg1;
- (int)style;
- (id)titleLabel;

@end