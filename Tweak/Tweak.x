#import "Layla.h"
/*
%hook CAMViewfinderViewController

-(void)_handleShutterButtonReleased:(id)arg1 {

	    %orig;
	
        cameraShutter = 0;
        AudioServicesDisposeSystemSoundID(cameraShutter);         
        AudioServicesCreateSystemSoundID((CFURLRef) CFBridgingRetain([NSURL fileURLWithPath: [NSString stringWithFormat:@"/Library/Application Support/Layla/Shutter/%@", kCameraShutterString]]), &cameraShutter);
		AudioServicesPlaySystemSound(cameraShutter);

	}

%end
*/
%hook UIKeyboardLayoutStar

- (void)playKeyClickSoundOnDownForKey:(UIKBTree *)key {

	%orig;

    SystemSoundID sound = 0;
    AudioServicesDisposeSystemSoundID(sound);
    AudioServicesCreateSystemSoundID((CFURLRef) CFBridgingRetain([NSURL fileURLWithPath:@"/Library/Application Support/Layla/KeyboardSounds/DoodleJumpv2.caf"]), &sound);
    AudioServicesPlaySystemSound((SystemSoundID)sound);

}

- (void)setPlayKeyClickSoundOn:(int)arg1 {

	    UIKBTree *delKey = [%c(UIKBTree) key];
		NSString *myDelKeyString = [delKey name];

		 if ([myDelKeyString isEqualToString:@"Delete-Key"]) {
            
		
      } else {
		  %orig;

	}
}

%end