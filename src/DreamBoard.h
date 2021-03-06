#import "DBPrefix.h"
#import "ExposeSwitcher.h"
#import "ExposeSwitcherDelegate.h"
#import "DBTheme.h"
#import "DBLoadingView.h"

@protocol ExposeSwitcherDelegate;
@class ExposeSwitcher, DBTheme, ExposeSwitcherObject, DBLoadingView;
@interface DreamBoard : NSObject <ExposeSwitcherDelegate> {
    //array of SBApplicationIcons
    NSMutableArray *appsArray;
    
    //set of hidden apps
    NSMutableSet *hiddenSet;
    
    NSMutableDictionary *prefsDict;
    NSMutableDictionary *prefsPath;
    
    NSString *currentTheme;
    
    ExposeSwitcher *switcher;
    UIWindow *window;
    
    BOOL isEditing;
    
    NSString *cachePath;
    NSString *scanPath;
    NSString *backgroundPath;
    NSString *shadowPath;
    NSString *shadowImagePath;
    
    DBTheme *dbtheme;
    BOOL hidden;
    
    ExposeSwitcherObject* ExpObj;
    DBLoadingView *loading;
    
    UIInterfaceOrientation ori;
}

@property(nonatomic, readonly) NSMutableArray *appsArray;
@property(nonatomic, readonly) NSMutableSet *hiddenSet;
@property(nonatomic, strong) UIWindow *window;
@property(nonatomic, weak) UIView *sbView;
@property(nonatomic, weak) UIView *sbSuperview;
@property(nonatomic, assign) CGRect sbViewFrame;
@property(readonly)BOOL isEditing;

@property(nonatomic, strong) NSString *cachePath;
@property(nonatomic, strong) NSString *scanPath;
@property(nonatomic, strong) NSString *backgroundPath;
@property(nonatomic, strong) NSString *shadowPath;
@property(nonatomic, strong) NSString *shadowImagePath;
@property(nonatomic, readonly) DBTheme *dbtheme;

@property(nonatomic, weak) id sbuicontroller;

+(DreamBoard*)sharedInstance;

//show the theme switcher
-(void)show;

//show/hide the app switcher
-(void)hideSwitcher;
-(void)showSwitcher;
-(void)toggleSwitcher;
-(void)reLayout;
-(void)setOrientation;

-(UIView *)removeSbView;
-(void)returnSbView;


-(void)launch:(id)app;
-(void)launchBundleId:(NSString *)bundle;

-(void)startEditing;
-(void)stopEditing;
-(void)unlockDevice;

-(void)updateBadgeForApp:(NSString*)leafIdentifier;

//load theme, if Default then unloads theme
-(void)loadTheme:(NSString*) theme;
-(void)unloadTheme;

-(NSString*)currentTheme;

+(void)throwRuntimeException:(NSString*)msg shouldExit:(BOOL)exit;
-(void)hideAllExcept:(UIView*)view;
-(void)showAllExcept:(UIView*)_view;
+(NSString *)replaceRootDir:(NSString *)str;
-(void)preLoadTheme;
-(void)save:(NSString *)theme;

@end
