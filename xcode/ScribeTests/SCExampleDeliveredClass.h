/* This class is generated by ObjCTemplar, please do not modify it */

#import "SCExampleClass.h"

#import "SCTrackChanges.h"

@class SCExampleClass;
@class SCExampleDeliveredClassBuilder;

@protocol SCExampleDeliveredClass <SCExampleClass, NSCopying, NSMutableCopying, NSCoding>

@property (nonatomic, strong, readonly, retain) NSValue * _Nullable additionalValue;
@property (nonatomic, strong, retain, readonly) NSDictionary<NSString *, NSNumber *> * _Nullable tableOfNumbers;

@end

@interface SCExampleDeliveredClass : SCExampleClass <SCExampleDeliveredClass> {
    @protected
    NSValue * _Nullable _additionalValue;
    NSDictionary<NSString *, NSNumber *> * _Nullable _tableOfNumbers;
 }

- (instancetype _Nullable)initWithID:(NSString * _Nonnull)ID additionalValue:(NSValue * _Nullable)additionalValue error:(NSError * _Nullable __autoreleasing * _Nullable)error NS_DESIGNATED_INITIALIZER;

- (instancetype _Nonnull)initWithExampleClass:(SCExampleDeliveredClass * _Nonnull)exampleClass NS_DESIGNATED_INITIALIZER;

// Builder support
+ (SCExampleDeliveredClassBuilder * _Nonnull)builder;

@end

@protocol SCMutableExampleDeliveredClass <SCExampleDeliveredClass, SCMutableExampleClass, SCTrackChanges>

@property (nonatomic, strong, retain, readwrite) NSString * _Nullable objectDescription;
@property (nonatomic, strong, retain, readwrite) NSArray<NSString *> * _Nonnull components;

- (void)addComponent:(NSString * _Nonnull)component;
- (void)insertComponent:(NSString * _Nonnull)component atIndex:(NSUInteger)index;
- (void)removeComponent:(NSString * _Nonnull)component;


@property (nonatomic, assign, readwrite) int counter;
@property (nonatomic, strong, retain, readwrite) NSDictionary<NSString *, NSNumber *> * _Nullable tableOfNumbers;

- (void)setNumber:(NSNumber * _Nonnull)number forKey:(NSString * _Nonnull)key;
- (void)removeNumberForKey:(NSString * _Nonnull)key;



@end

@interface SCMutableExampleDeliveredClass : SCExampleDeliveredClass <SCMutableExampleDeliveredClass>

@end

@interface SCExampleDeliveredClassBuilder : SCExampleClassBuilder

 @property (nonatomic, strong, readwrite, retain) NSValue * _Nullable additionalValue;
 @property (nonatomic, strong, retain, readwrite) NSDictionary<NSString *, NSNumber *> * _Nullable tableOfNumbers;

- (SCExampleDeliveredClass * _Nullable)buildWithError:(NSError * _Nullable __autoreleasing * _Nullable)error;

@end