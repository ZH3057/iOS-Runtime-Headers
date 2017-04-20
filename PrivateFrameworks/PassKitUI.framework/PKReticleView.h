/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKReticleView : UIView {
    struct CGPath { } * _bouncePathRectangle;
    struct CGPath { } * _bouncePathSquare;
    struct CGColor { } * _shadowColorDefault;
    struct CGColor { } * _shadowColorFailure;
    struct CGColor { } * _shadowColorSuccess;
    CAShapeLayer * _shapeLayer;
}

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CGPath { }*)_createReticlePathForPoints:(struct CGPoint { float x1; float x2; }*)arg1;
- (struct CGPoint { float x1; float x2; }*)_makeSanitizedCorners:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)blinkForSuccess:(BOOL)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)positionWithCorners:(struct CGPoint { float x1; float x2; }*)arg1 completion:(id /* block */)arg2;
- (void)reset;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end