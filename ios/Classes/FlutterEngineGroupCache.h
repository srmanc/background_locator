#import <Flutter/Flutter.h>
#import <Flutter/FlutterEngineGroup.h>

@interface FlutterEngineGroupCache : NSObject

@property (nonatomic, strong) NSMutableDictionary<NSString *, FlutterEngineGroup *> *engineGroups;

+ (instancetype)sharedInstance;

- (FlutterEngineGroup *)get:(NSString *)key;
- (void)put:(NSString *)key engineGroup:(FlutterEngineGroup *)engineGroup;

@end