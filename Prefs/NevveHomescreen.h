#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioServices.h>
#import <CepheiPrefs/HBListController.h>
#import <CepheiPrefs/HBTintedTableCell.h>
#import <CepheiPrefs/HBRootListController.h>
#import <CepheiPrefs/HBTwitterCell.h>
#import <CepheiPrefs/HBImageTableCell.h>
#import <CepheiPrefs/HBPackageNameHeaderCell.h>

@interface NevveHomescreenListController: HBListController {

SystemSoundID soundSelected;

}
- (NSArray *)getData:(id)target;
- (void)setAndPreview:(id)value forSpecifier:(id)specifier;
- (void)listThatDir;
- (void)checkForFiles;

@end
  
NSArray *directoryHomescreenContent;