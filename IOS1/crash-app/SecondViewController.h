#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>

- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end

@interface SecondViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;

@property NSString *surname;

@end

NS_ASSUME_NONNULL_END
