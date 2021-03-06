/* This class is generated by ObjCTemplar, please do not modify it */

#import <Foundation/Foundation.h>

#import "SCTrackChanges.h"
#import "SCImmutableCopying.h"

@class SCExampleDeliveredClass;
@class SCExampleSetContainer;
@class SCExampleClassBuilder;

@protocol SCExampleClass <NSObject, NSCopying, SCImmutableCopying, NSMutableCopying, NSCoding>

@property (nonatomic, strong, readonly, getter=internalID, retain) NSString * _Nonnull ID;
@property (nonatomic, strong, retain, readonly) NSString * _Nullable objectDescription;
@property (nonatomic, strong, retain, readonly) NSArray<NSString *> * _Nullable components;
@property (nonatomic, assign, readonly) int counter;

@end

@interface SCExampleClass : NSObject <SCExampleClass> {
    @protected
    NSString * _Nonnull _ID;
    NSString * _Nullable _objectDescription;
    NSArray<NSString *> * _Nullable _components;
    int _counter;
 }

- (instancetype _Nullable)initWithID:(NSString * _Nonnull)ID  error:(NSError * _Nullable __autoreleasing * _Nullable)error NS_DESIGNATED_INITIALIZER;

- (instancetype _Nonnull)initWithExampleClass:(SCExampleClass * _Nonnull)exampleClass NS_DESIGNATED_INITIALIZER;

// Builder support
+ (SCExampleClassBuilder * _Nonnull)builder;

@end

@protocol SCMutableExampleClass <SCExampleClass, SCTrackChanges>


@property (nonatomic, strong, setter=applyObjectDescription:, retain, readwrite) NSString * _Nullable objectDescription;

- (void)setComponents:(NSArray<NSString *> * _Nullable)components error:(NSError * _Nullable __autoreleasing * _Nullable)error;
- (void)addComponent:(NSString * _Nonnull)component error:(NSError * _Nullable __autoreleasing * _Nullable)error;
- (void)insertComponent:(NSString * _Nonnull)component atIndex:(NSUInteger)index error:(NSError * _Nullable __autoreleasing * _Nullable)error;
- (void)removeComponent:(NSString * _Nonnull)component error:(NSError * _Nullable __autoreleasing * _Nullable)error;

@property (nonatomic, assign, readwrite) int counter;

@end

@interface SCMutableExampleClass : SCExampleClass <SCMutableExampleClass>

@end

@interface SCExampleClassBuilder : NSObject

 @property (nonatomic, strong, readwrite, getter=internalID, retain) NSString * _Nullable ID;
 @property (nonatomic, strong, setter=applyObjectDescription:, retain, readwrite) NSString * _Nullable objectDescription;
 @property (nonatomic, strong, retain, readwrite) NSArray<NSString *> * _Nullable components;
 @property (nonatomic, assign, readwrite) int counter;

- (SCExampleClass * _Nullable)buildWithError:(NSError * _Nullable __autoreleasing * _Nullable)error;

@end