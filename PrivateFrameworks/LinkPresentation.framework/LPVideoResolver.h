/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoResolver : NSObject <_LPResolver> {
    AVAsset * _asset;
    id /* block */  _completionHandler;
    <_LPResolvable> * _resolvable;
    NSURLSession * _session;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completedWithVideo:(id)arg1;
- (void)_resolveVideo;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)initWithResolvable:(id)arg1 webViewForProcessSharing:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
