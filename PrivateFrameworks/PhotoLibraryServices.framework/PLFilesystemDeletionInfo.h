/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSURL, NSString, NSArray;

@interface PLFilesystemDeletionInfo : NSObject  {
    NSURL *_objectIDURI;
    NSArray *_fileURLs;
    unsigned int _thumbnailIndex;
    NSString *_thumbnailIdentifier;
    NSString *_uuid;
}

@property(readonly) NSURL * objectIDURI;
@property(readonly) NSArray * fileURLs;
@property(readonly) unsigned int thumbnailIndex;
@property(readonly) NSString * thumbnailIdentifier;
@property(readonly) NSString * uuid;

+ (id)deletionInfoWithAsset:(id)arg1;

- (id)objectIDURI;
- (id)initWithObjectIDURI:(id)arg1 fileURLs:(id)arg2 thumbnailIndex:(unsigned int)arg3 thumbnailIdentifier:(id)arg4 uuid:(id)arg5;
- (id)fileURLs;
- (unsigned int)thumbnailIndex;
- (id)thumbnailIdentifier;
- (id)uuid;
- (void)dealloc;
- (id)description;

@end