/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTwoSidedNode : SKNode {
    SKNode * _sideA;
    SKNode * _sideB;
    double  _xRotation;
    double  _yRotation;
}

@property (nonatomic, retain) SKNode *sideA;
@property (nonatomic, retain) SKNode *sideB;
@property (nonatomic) double xRotation;
@property (nonatomic) double yRotation;

- (void).cxx_destruct;
- (id)backSide;
- (id)frontSide;
- (void)setSideA:(id)arg1;
- (void)setSideB:(id)arg1;
- (void)setXRotation:(double)arg1;
- (void)setYRotation:(double)arg1;
- (id)sideA;
- (id)sideB;
- (double)xRotation;
- (double)yRotation;

@end