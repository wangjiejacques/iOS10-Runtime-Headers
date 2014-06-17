/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class HKHealthStore, _HKMedicalIDData;

@interface ABMedicalIDAction : ABPropertyAction <HKMedicalIDViewControllerDelegate> {
    long long _medicalIDActionType;
    HKHealthStore *_healthStore;
    _HKMedicalIDData *_healthData;
}

@property long long medicalIDActionType;
@property(retain) HKHealthStore * healthStore;
@property(retain) _HKMedicalIDData * healthData;


- (void)setMedicalIDActionType:(long long)arg1;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (id)healthStore;
- (void)setHealthData:(id)arg1;
- (id)healthData;
- (long long)medicalIDActionType;
- (void)performActionWithSender:(id)arg1;

@end