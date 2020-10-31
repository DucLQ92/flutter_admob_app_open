#import <Flutter/Flutter.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface FlutterAdmobAppOpenPlugin : NSObject<FlutterPlugin>
@property(strong, nonatomic) UIWindow* window;
@property(nonatomic) GADAppOpenAd* appOpenAd;
@property(nonatomic) NSDate *loadTime;
@property(nonatomic, retain) NSString *appId;
@property(nonatomic, retain) NSString *appAppOpenAdUnitId;

- (void)requestAppOpenAd;
- (void)tryToPresentAd;
@end
