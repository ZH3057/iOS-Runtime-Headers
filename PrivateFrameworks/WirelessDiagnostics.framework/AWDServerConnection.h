/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@interface AWDServerConnection : NSObject {
}

- (void)dealloc;
- (unsigned long long)getAWDTimestamp;
- (id)initWithComponentId:(unsigned long)arg1 andBlockOnConfiguration:(BOOL)arg2;
- (id)initWithComponentId:(unsigned long)arg1;
- (id)newMetricContainerWithIdentifier:(unsigned long)arg1;
- (BOOL)registerQueriableMetricCallback:(id)arg1 forIdentifier:(unsigned long)arg2;
- (BOOL)registerQueriableMetricCallbackForLogging:(id)arg1;
- (BOOL)submitMetric:(id)arg1;

@end