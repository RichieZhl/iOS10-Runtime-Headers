/* Generated by RuntimeBrowser.
 */

@protocol MTLBlitCommandEncoder <MTLCommandEncoder>

@required

- (void)copyFromBuffer:(id <MTLBuffer>)arg1 sourceOffset:(unsigned int)arg2 sourceBytesPerRow:(unsigned int)arg3 sourceBytesPerImage:(unsigned int)arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned int)arg7 destinationLevel:(unsigned int)arg8 destinationOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg9;
- (void)copyFromBuffer:(id <MTLBuffer>)arg1 sourceOffset:(unsigned int)arg2 sourceBytesPerRow:(unsigned int)arg3 sourceBytesPerImage:(unsigned int)arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned int)arg7 destinationLevel:(unsigned int)arg8 destinationOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg9 options:(unsigned int)arg10;
- (void)copyFromBuffer:(id <MTLBuffer>)arg1 sourceOffset:(unsigned int)arg2 toBuffer:(id <MTLBuffer>)arg3 destinationOffset:(unsigned int)arg4 size:(unsigned int)arg5;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned int)arg2 sourceLevel:(unsigned int)arg3 sourceOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toBuffer:(id <MTLBuffer>)arg6 destinationOffset:(unsigned int)arg7 destinationBytesPerRow:(unsigned int)arg8 destinationBytesPerImage:(unsigned int)arg9;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned int)arg2 sourceLevel:(unsigned int)arg3 sourceOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toBuffer:(id <MTLBuffer>)arg6 destinationOffset:(unsigned int)arg7 destinationBytesPerRow:(unsigned int)arg8 destinationBytesPerImage:(unsigned int)arg9 options:(unsigned int)arg10;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned int)arg2 sourceLevel:(unsigned int)arg3 sourceOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned int)arg7 destinationLevel:(unsigned int)arg8 destinationOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg9;
- (void)fillBuffer:(id <MTLBuffer>)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 value:(unsigned char)arg3;
- (void)generateMipmapsForTexture:(id <MTLTexture>)arg1;
- (void)synchronizeResource:(id <MTLResource>)arg1;
- (void)synchronizeTexture:(id <MTLTexture>)arg1 slice:(unsigned int)arg2 level:(unsigned int)arg3;

@end