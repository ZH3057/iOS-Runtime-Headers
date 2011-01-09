/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPickerControllerInternal;



@interface MPMediaPickerController : UIViewController 
{
    MPMediaPickerControllerInternal *_internal;
}

@property(readonly) NSInteger mediaTypes;
@property <MPMediaPickerControllerDelegate> *delegate;
@property BOOL allowsPickingMultipleItems;
@property(copy) NSString *prompt;

+ (void)preheatMediaPicker;

- (void)_applicationWillTerminate:(id)arg1;
- (NSInteger)mediaTypes;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_canReloadView;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)allowsPickingMultipleItems;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (id)initWithMediaTypes:(NSInteger)arg1;
- (void)_windowDidCreateContextNotification:(id)arg1;
- (void)_windowWillDestoryContextNotification:(id)arg1;
- (void)_moveLayerHostToLayer:(id)arg1;
- (void)_viewDidMoveToWindow;
- (void)_viewWillMoveFromWindow;
- (void)_viewSizeDidChange;
- (void)_serverPortInvalidated;
- (void)_invalidateReplyPort;
- (void)_pickerDidCancel;
- (void)_pickerDidPickItems:(id)arg1;

@end