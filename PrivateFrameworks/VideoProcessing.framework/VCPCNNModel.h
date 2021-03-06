/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNModel : NSObject {
    struct CNNBlock {} * _blocks;
    struct CNNData { float *x1; struct CNNSize { int x_2_1_1[4]; } x2; } * _output;
    short  _quantFactor;
}

@property (readonly) struct CNNData { float *x1; struct CNNSize { int x_2_1_1[4]; } x2; }*output;

- (int)add:(struct CNNBlock { int (**x1)(); struct CNNSize { int x_2_1_1[4]; } x2; struct CNNSize { int x_3_1_1[4]; } x3; struct CNNData {} *x4; struct CNNData {} *x5; }*)arg1;
- (void)dealloc;
- (int)dynamicForward:(struct CNNData { float *x1; struct CNNSize { int x_2_1_1[4]; } x2; }*)arg1 paramFileUrl:(id)arg2 cancel:(id /* block */)arg3;
- (int)forward:(struct CNNData { float *x1; struct CNNSize { int x_2_1_1[4]; } x2; }*)arg1;
- (id)init;
- (id)initWithQuantFactor:(short)arg1;
- (int)initailizeNetwork:(const struct CNNSize { int x1[4]; }*)arg1 paramFileUrl:(id)arg2;
- (struct CNNData { float *x1; struct CNNSize { int x_2_1_1[4]; } x2; }*)output;
- (int)size;

@end
