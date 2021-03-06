#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIPushButton.h>
#import <UIKit/UITableCell.h>
#import <UIKit/UIImageAndTextTableCell.h>
#import <UIKit/UISwitchControl.h>
#import <UIKit/UIProgressHUD.h>

@interface PayloadApplication : UIApplication {
	UIProgressHUD *progress;
}

- (void)setProgressHUDText:(NSString *) label;
- (void)setProgressHUDTextMain:(id) label;
- (void)showProgressHUD:(NSString *)label withWindow:(UIWindow *)w withView:(UIView *)v withRect:(struct CGRect)rect;
- (void)hideProgressHUD:(id) anObject;
- (void)jailbreak:(id)param;
- (void)doProgress:(int)progressBytes withTotal: (int)totalBytes;

- (void)alertSheet:(UIAlertSheet*)sheet buttonClicked:(int)button;
- (void)displayAlert:(NSString*)alert withTitle: (NSString*) title;
@end
