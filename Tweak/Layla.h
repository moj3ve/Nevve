#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioServices.h>
#import <Cephei/HBPreferences.h>

/*NSString *kUnlock;
NSString *kLock;
NSString *kFolders;
NSString *kFoldersClosed;
NSString *kLSCode;
NSString *kKBSounds;
NSString *kVolumeSounds;
NSString *kTPDialSounds;
NSString *kScreenshotSounds;
NSString *kRingerString;*/
NSString *kCameraShutterString;

/*SystemSoundID unlockSound;
SystemSoundID folderOpenSound;
SystemSoundID folderClosedSound;
SystemSoundID volumeSound;
SystemSoundID tpDialerSound;
SystemSoundID screenShotSound;
SystemSoundID ringerSound;*/
SystemSoundID cameraShutter;

//NSString *deleteKeyFile = [[NSBundle bundleWithPath:@"/System/Library/Audio/UISounds/"] pathForResource:@"key_press_delete" ofType:@"caf"];

//#define volString [NSString stringWithFormat:@"/Library/Application Support/Layla/VolumeSounds/%@", kVolumeSounds]

//AVAudioSession *session = [AVAudioSession sharedInstance];

@interface CUCaptureController : NSObject
+(id)sharedInstance;
-(BOOL)isCapturingVideo;
-(BOOL)isCapturingBurst;
@end

@interface CAMViewfinderViewController : UIViewController
-(BOOL)isCapturingPhoto;
@end
/*
@interface SBHUDView : UIView
@end

@interface SBRingerHUDView : SBHUDView
@end

@interface SBMediaController : NSObject
+(id)sharedInstance;
-(BOOL)isPlaying;
-(BOOL)isRingerMuted;
@end

@interface SBFolderController : NSObject 
-(BOOL)isOpen;
@end

@interface SBLockScreenViewControllerBase : UIViewController
-(BOOL)isAuthenticated;
@end
 
@interface SBLockScreenManager : NSObject
+(SBLockScreenManager *)sharedInstance;
-(SBLockScreenViewControllerBase *)lockScreenViewController;
-(BOOL)isUILocked;
@end

@interface SBCoverSheetSlidingViewController : UIViewController
-(void)_handleDismissGesture:(id)arg1 ;
-(void)setPresented:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
@end*/

@interface UIKBTree : NSObject
@property (nonatomic, strong, readwrite) NSString * name;
+(id)sharedInstance;
+(id)key;
@end

@interface UIKeyboardLayoutStar : UIView
@property (nonatomic, copy) NSString * localizedInputKey;
-(void)setPlayKeyClickSoundOn:(int)arg1;
@end