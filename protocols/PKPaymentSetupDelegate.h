/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentSetupDelegate <NSObject>

@required

- (void)paymentSetupDidFinish;

@optional

- (void)paymentSetupDidShowEligibilityIssue;
- (void)paymentSetupDidShowError:(NSError *)arg1;

@end