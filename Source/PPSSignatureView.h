#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;

@property (nonatomic, assign) float STROKE_WIDTH_MIN;
@property (nonatomic, assign) float STROKE_WIDTH_MAX;

- (void)erase;

@end
