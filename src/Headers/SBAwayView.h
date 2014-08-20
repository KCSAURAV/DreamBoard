@class SBActivationView, SBAwaySwipeGestureRecognizer, SBAwayViewPluginController, UIAlertView, UIButton, SBAwayInCallController, SBAwayBulletinListController, SBAwayDateView, SBAwayLockBar, UIView, SBAwayChargingView, NSTimer, SBAwayBuddyBackgroundView, NSDictionary, SBAlertImageView, TPBottomSingleButtonBar;

@interface SBAwayView : UIView {
	BOOL _isDimmed;	// 104 = 0x68
	BOOL _fullscreen;	// 105 = 0x69
	BOOL _alwaysFullscreen;	// 106 = 0x6a
	BOOL _showingBlockedIndicator;	// 107 = 0x6b
	BOOL _hasTelephony;	// 108 = 0x6c
	BOOL _wasShowingAlertAtDismiss;	// 109 = 0x6d
	BOOL _removingAlertAtUnlock;	// 110 = 0x6e
	BOOL _awayPluginIsVisible;	// 111 = 0x6f
	BOOL _ignoreFullScreenUpdates;	// 112 = 0x70
	BOOL _lockBarCurrentlyTracking;	// 113 = 0x71
	SBAwayChargingView *_chargingView;	// 116 = 0x74
	SBAwayDateView *_dateView;	// 120 = 0x78
	SBActivationView *_activationView;	// 124 = 0x7c
	SBAlertImageView *_firewireWarningView;	// 128 = 0x80
	SBAwayViewPluginController *_awayPluginController;	// 132 = 0x84
	SBAwaySwipeGestureRecognizer *_gestureRecognizer;	// 136 = 0x88
	SBAwayBuddyBackgroundView *_buddyBackgroundView;	// 140 = 0x8c
	SBAwayBulletinListController *_bulletinController;	// 144 = 0x90
	NSTimer *_mediaControlsTimer;	// 148 = 0x94
	NSTimer *_fullscreenTimer;	// 152 = 0x98
	NSTimer *_chargingViewTimer;	// 156 = 0x9c
	NSDictionary *_nowPlayingInfo;	// 160 = 0xa0
	BOOL _isPlaying;	// 164 = 0xa4
	NSDictionary *_currentPluginFadeAnimationContext;	// 168 = 0xa8
	NSTimer *_blockedStatusUpdateTimer;	// 172 = 0xac
	UIAlertView *_alertSheet;	// 176 = 0xb0
	int _alertSheetPosition;	// 180 = 0xb4
	SBAwayInCallController *_inCallController;	// 184 = 0xb8
	SBAwayLockBar *_lockBar;	// 188 = 0xbc
	TPBottomSingleButtonBar *_cancelSyncBar;	// 192 = 0xc0
	UIButton *_infoButton;	// 196 = 0xc4
	BOOL _cameraButtonShowing;	// 200 = 0xc8
	UIView *_legalTextView;	// 204 = 0xcc
}
@property(assign) BOOL dimmed;	// G=0x59f2d; S=0x60609; converted property
@property(assign, getter=isAlwaysFullscreen) BOOL alwaysFullscreen;	// G=0x59f5d; S=0x5f735; converted property
@property(assign, getter=isPlaying) BOOL playing;	// G=0x59f7d; S=0x5de21; converted property
@property(readonly, assign, getter=isFullscreen) BOOL fullscreen;	// G=0x59f4d; converted property
@property(readonly, retain) SBAwayChargingView *chargingView;	// G=0x5e1c5; converted property
@property(readonly, retain) SBAwayDateView *dateView;	// G=0x5ed55; converted property
@property(readonly, retain) SBAwayBuddyBackgroundView *buddyBackgroundView;	// G=0x5ebfd; converted property
@property(readonly, retain) SBAwayBulletinListController *bulletinController;	// G=0x59f6d; converted property
@property(readonly, retain) SBAwayInCallController *inCallController;	// G=0x5b265; converted property
+ (id)newBottomBarForInstance:(id)instance;	// 0x5ca5d
+ (id)lockLabels:(BOOL)labels fontSize:(float *)size;	// 0x5c78d
- (void)_clearBlockedStatusUpdateTimer;	// 0x59fa5
- (id)initWithFrame:(CGRect)frame;	// 0x5c5d1
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;	// 0x6217d
- (void)alertDisplayWillBecomeVisible;	// 0x62059
- (void)postLockCompletedNotification:(BOOL)notification;	// 0x61fed
- (void)dealloc;	// 0x61df1
- (void)_postLockCompletedNotification;	// 0x59fe5
- (void)finishedAnimatingIn;	// 0x61d9d
- (void)dismiss;	// 0x61c25
- (void)performAdditionalDismissAnimations;	// 0x5a031
- (void)finishedAnimatingOut;	// 0x61b69
- (float)durationForOthersActivation;	// 0x5a051
- (void)setBottomLockBar:(id)bar;	// 0x5a099
- (void)noteAssistantWillAppear;	// 0x5a0e1
- (void)noteAssistantDidHide;	// 0x5a11d
- (BOOL)shouldShowBottomBar;	// 0x5a159
- (BOOL)shouldAnimateIn;	// 0x59f25
- (BOOL)shouldAnimateIconsOut;	// 0x59f29
- (BOOL)isAnimating;	// 0x5a1ad
- (void)startAnimations;	// 0x5a1d5
- (void)stopAnimations;	// 0x5a225
- (void)resetForDeactivation;	// 0x5a2cd
- (void)showInfoButton;	// 0x6194d
- (void)hideInfoButton;	// 0x5a325
- (BOOL)isSupportedInterfaceOrientation:(int)orientation;	// 0x618e1
- (void)setLockoutUIVisible:(BOOL)visible mode:(int)mode;	// 0x615bd
- (void)updateUIForRestorationState:(int)restorationState;	// 0x5a345
- (void)updateUIForResetState:(int)resetState;	// 0x5a4d5
- (void)addFirewireWarningView;	// 0x613c5
- (void)removeFirewireWarningView;	// 0x5a62d
- (BOOL)shouldShowChargingView;	// 0x5a66d
- (BOOL)isShowingWallpaper;	// 0x612d5
- (void)_fixupFirstResponder;	// 0x5a74d
- (void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;	// 0x5a86d
- (BOOL)canBecomeFirstResponder;	// 0x5a891
- (void)updateInterface;	// 0x607ed
- (void)_setMiddleSubviewsAlpha:(float)alpha;	// 0x5a8d1
- (void)setMiddleContentAlpha:(float)alpha;	// 0x5a959
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x60609
// converted property getter: - (BOOL)dimmed;	// 0x59f2d
- (void)resetLockBar;	// 0x5a9e1
- (void)lockBarUnlocked:(id)unlocked freezeKnobInLockedPosition:(BOOL)lockedPosition;	// 0x5aa01
- (void)lockBarUnlocked:(id)unlocked;	// 0x5ab1d
- (void)lockBarStartedTracking:(id)tracking;	// 0x5ab31
- (void)lockBarStoppedTracking:(id)tracking;	// 0x5ab79
- (void)lockBar:(id)bar textAlphaChangedForKnobDrag:(float)knobDrag;	// 0x5abc1
- (void)_updateLockBarLabelByClearingFirst:(BOOL)first;	// 0x60291
- (void)updateLockBarLabel;	// 0x5abe5
- (void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;	// 0x6021d
- (id)currentAwayPluginController;	// 0x59f3d
- (void)removePluginController:(BOOL)controller;	// 0x5abf9
- (void)_setPluginController:(id)controller;	// 0x5fcb1
- (void)_finalizeAndClearPluginAnimationContext;	// 0x5ace9
- (void)_pluginFadeInAnimationDidStop:(id)_pluginFadeInAnimation finished:(id)finished context:(void *)context;	// 0x5aded
- (void)_fullscreenAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;	// 0x5fbe1
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration force:(BOOL)force;	// 0x5f8a5
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration;	// 0x5adfd
// converted property getter: - (BOOL)isFullscreen;	// 0x59f4d
// converted property getter: - (BOOL)isAlwaysFullscreen;	// 0x59f5d
// converted property setter: - (void)setAlwaysFullscreen:(BOOL)fullscreen;	// 0x5f735
- (void)setIgnoreFullScreenUpdates:(BOOL)updates;	// 0x5ae21
// converted property getter: - (id)bulletinController;	// 0x59f6d
- (void)_setAwayViewGesturesEnabled:(BOOL)enabled;	// 0x5aee1
- (void)windowGestureWasCompleted:(id)completed;	// 0x5f631
- (BOOL)shouldShowBlockedRedStatus;	// 0x5af89
- (void)_updateBlockedStatusLabel;	// 0x5f1e9
- (void)deviceUnlockCanceled;	// 0x5f169
- (void)deviceUnlockFailed;	// 0x5f0e5
- (void)showBlockedStatus;	// 0x5f039
- (void)removeBlockedStatus;	// 0x5ef31
- (void)_updateBlockedStatus;	// 0x5b019
- (id)_currentTitleForDateView;	// 0x5b0cd
// converted property getter: - (id)dateView;	// 0x5ed55
- (void)removeDateView;	// 0x5b18d
- (void)addDateView;	// 0x5ec89
- (void)awayDateViewDidChangeTitle:(id)awayDateView;	// 0x5b1ad
// converted property getter: - (id)buddyBackgroundView;	// 0x5ebfd
- (void)addBuddyBackgroundView;	// 0x5b1f1
- (void)removeBuddyBackgroundView;	// 0x5b245
// converted property getter: - (id)inCallController;	// 0x5b265
- (BOOL)shouldShowInCallInfo;	// 0x5b2d5
- (void)updateInCallInfo;	// 0x5b345
- (CGAffineTransform)slideTopBarToVisible:(BOOL)visible;	// 0x5eb75
- (void)_insertBulletinView;	// 0x5b355
- (void)_positionBulletinViewForOrientation:(int)orientation;	// 0x5e8e5
- (void)hideBulletinView;	// 0x5b471
- (void)showBulletinView;	// 0x5b4a9
- (void)animateToHidingDeviceLockFinished;	// 0x5e885
- (void)setShowingDeviceLock:(BOOL)lock duration:(float)duration completion:(id)completion;	// 0x5e569
- (void)showAlertSheet:(id)sheet;	// 0x5b5b9
- (void)removeAlertSheet;	// 0x5b6c1
- (void)slideAlertSheetOut:(BOOL)anOut direction:(BOOL)direction duration:(float)duration;	// 0x5b739
- (void)_recenterAlertSheet;	// 0x5e3e5
// converted property getter: - (id)chargingView;	// 0x5e1c5
- (void)showChargingView;	// 0x5b87d
- (void)hideChargingView;	// 0x5b9b9
- (void)updateChargingView;	// 0x5b9d9
- (void)startChargingViewTimer;	// 0x5ba1d
- (void)_chargingViewTimerFired;	// 0x5ba99
- (void)_didFadeChargingView;	// 0x5bb4d
- (void)clearChargingViewTimer;	// 0x5bbbd
- (void)_hideChargingViewAndClearTimer;	// 0x5bbfd
- (void)clearMediaControlsTimer;	// 0x5bc3d
- (void)restartMediaControlsTimer;	// 0x5bc85
- (void)restartMediaControlsTimerIfNecessary;	// 0x5bd01
- (void)hideMediaControls;	// 0x5e0b5
- (void)_hideMediaControls;	// 0x5bd2d
- (void)showMediaControls;	// 0x5df49
- (void)toggleMediaControls;	// 0x5be01
- (BOOL)isShowingMediaControls;	// 0x5be4d
- (BOOL)isMediaControlsShowingOverlays;	// 0x5be71
// converted property getter: - (BOOL)isPlaying;	// 0x59f7d
- (void)toggleCameraButton;	// 0x5be95
- (void)showCameraButton;	// 0x5bec9
- (void)hideCameraButton;	// 0x5bfd1
- (void)setBarsHiddenForCamera:(BOOL)camera;	// 0x5dead
// converted property setter: - (void)setPlaying:(BOOL)playing;	// 0x5de21
- (BOOL)hasNowPlayingInfo;	// 0x59f8d
- (id)_topBarLCDControlsImage;	// 0x5c115
- (void)updateTopBarBackground;	// 0x5dce1
- (void)showSyncingBottomBar:(BOOL)bar;	// 0x5db95
- (void)hideSyncingBottomBar:(BOOL)bar;	// 0x5c1b5
- (void)updateNowPlayingInfo:(id)info;	// 0x5d859
- (void)enableOrDisableNowPlayingPlugin;	// 0x5c241
- (void)cancelFullscreenTimer;	// 0x5c375
- (void)restartFullscreenTimer;	// 0x5c3b5
- (void)_fullscreenTimerFired;	// 0x5c431
- (void)restartFullscreenTimerIfNecessary;	// 0x5c461
- (BOOL)handleMenuButtonTap;	// 0x5c48d
- (void)didMoveToWindow;	// 0x5c519
- (void)animateToShowingDeviceLock:(BOOL)showingDeviceLock duration:(float)duration;	// 0x5d811
- (void)_networkTetheringStateChanged:(id)changed;	// 0x5c559
//- (void)_handleKeyEvent:(GSEventRef)event;	// 0x5d735
- (void)_initializeLegalTextOverlay;	// 0x5ce15
- (void)_layoutLegalTextOverlay:(int)overlay;	// 0x5cc0d
@end

