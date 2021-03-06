#import <UIKit/UIKit.h>
#import "UnityAds.h"

@interface UADSClientProperties : NSObject
+ (void)setGameId:(NSString *)gid;
+ (NSString *)getGameId;
+ (NSString *)getAppName;
+ (NSString *)getAppVersion;
+ (BOOL)isAppDebuggable;
+ (void)setCurrentViewController:(UIViewController *)viewController;
+ (UIViewController *)getCurrentViewController;
+ (void)setDelegate:(id<UnityAdsDelegate>)delegate;
+ (id<UnityAdsDelegate>)getDelegate;
@end