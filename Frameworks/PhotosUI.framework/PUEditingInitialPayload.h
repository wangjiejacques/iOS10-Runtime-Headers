/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditingInitialPayload : NSObject <NSSecureCoding> {
    PHAdjustmentData *_adjustmentData;
    NSDate *_creationDate;
    NSData *_displaySizeImageData;
    CLLocation *_location;
    unsigned int _mediaSubtypes;
    int _mediaType;
    NSData *_placeholderImageData;
    NSString *_videoPathSandboxExtensionToken;
    NSURL *_videoURL;
}

@property (nonatomic, retain) PHAdjustmentData *adjustmentData;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSData *displaySizeImageData;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) unsigned int mediaSubtypes;
@property (nonatomic) int mediaType;
@property (nonatomic, retain) NSData *placeholderImageData;
@property (nonatomic, retain) NSString *videoPathSandboxExtensionToken;
@property (nonatomic, retain) NSURL *videoURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustmentData;
- (id)creationDate;
- (id)displaySizeImageData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (unsigned int)mediaSubtypes;
- (int)mediaType;
- (id)placeholderImageData;
- (void)setAdjustmentData:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplaySizeImageData:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMediaSubtypes:(unsigned int)arg1;
- (void)setMediaType:(int)arg1;
- (void)setPlaceholderImageData:(id)arg1;
- (void)setVideoPathSandboxExtensionToken:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)videoPathSandboxExtensionToken;
- (id)videoURL;

@end