/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject {
    NSMassFormatter *_massFormatter;
}

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (void)_localeChanged:(id)arg1;
- (void)_updateRoundingIncrement;
- (void)dealloc;
- (id)init;
- (id)stringFromWeightInKilograms:(id)arg1;

@end