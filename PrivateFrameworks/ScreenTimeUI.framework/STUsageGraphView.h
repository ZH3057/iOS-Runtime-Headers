/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageGraphView : UIView <UIGestureRecognizerDelegate> {
    UILayoutGuide * _barSectionLayoutGuide;
    NSArray * _barViewHeightConstraints;
    NSArray * _barViews;
    STDeviceBedtime * _bedtime;
    UILayoutGuide * _bedtimeFieldLayoutGuide;
    NSArray * _bedtimeFields;
    STUsageReportGraphDataSet * _dataSet;
    UILayoutGuide * _graphLayoutGuide;
    UIImageView * _horizontalBaseline;
    UILayoutGuide * _labelSectionLayoutGuide;
    UIView * _paddleConnectorView;
    STPaddleView * _paddleView;
    NSLayoutConstraint * _paddleViewCenterXConstraint;
    NSLayoutConstraint * _paddleViewConnectorCenterXConstraint;
    STBarView * _selectedBarView;
    UIView * _titleView;
    NSArray * _verticalDividers;
    NSArray * _verticalLayoutGuides;
    NSLayoutConstraint * _weeklyAverageHeightConstraint;
    UILayoutGuide * _weeklyAverageLayoutGuide;
    UIImageView * _weeklyAverageLine;
    NSLayoutConstraint * _weeklyAverageTrailingConstraint;
}

@property (nonatomic, retain) UILayoutGuide *barSectionLayoutGuide;
@property (nonatomic, copy) NSArray *barViewHeightConstraints;
@property (nonatomic, copy) NSArray *barViews;
@property (nonatomic, copy) STDeviceBedtime *bedtime;
@property (nonatomic, retain) UILayoutGuide *bedtimeFieldLayoutGuide;
@property (nonatomic, copy) NSArray *bedtimeFields;
@property (nonatomic, retain) STUsageReportGraphDataSet *dataSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILayoutGuide *graphLayoutGuide;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *horizontalBaseline;
@property (nonatomic, retain) UILayoutGuide *labelSectionLayoutGuide;
@property (nonatomic, retain) UIView *paddleConnectorView;
@property (nonatomic, retain) STPaddleView *paddleView;
@property (nonatomic, retain) NSLayoutConstraint *paddleViewCenterXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paddleViewConnectorCenterXConstraint;
@property (nonatomic, retain) STBarView *selectedBarView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *titleView;
@property (nonatomic, copy) NSArray *verticalDividers;
@property (nonatomic, copy) NSArray *verticalLayoutGuides;
@property (nonatomic, retain) NSLayoutConstraint *weeklyAverageHeightConstraint;
@property (nonatomic, retain) UILayoutGuide *weeklyAverageLayoutGuide;
@property (nonatomic, retain) UIImageView *weeklyAverageLine;
@property (nonatomic, retain) NSLayoutConstraint *weeklyAverageTrailingConstraint;

+ (id)baselineImage;
+ (id)bedtimeFieldImage;
+ (id)dashedAverageLineImage;

- (void).cxx_destruct;
- (id)barSectionLayoutGuide;
- (id)barViewHeightConstraints;
- (id)barViews;
- (id)bedtime;
- (id)bedtimeFieldLayoutGuide;
- (id)bedtimeFields;
- (id)createBarViewWithDataPoint:(id)arg1 layoutGuide:(id)arg2 previousView:(id)arg3 previousLayoutGuide:(id)arg4 layoutGuideWidthMultiplier:(double)arg5;
- (id)createBedtimeField;
- (id)createDividerWithView:(id)arg1 layoutGuide:(id)arg2 previousLayoutGuide:(id)arg3 layoutGuideWidthMultiplier:(double)arg4;
- (id)createFirstDivider;
- (id)createWeeklyAverageLineWithLayoutGuide:(id)arg1;
- (id)dataSet;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)graphLayoutGuide;
- (void)handleGesture:(id)arg1;
- (id)horizontalBaseline;
- (id)initWithTitleView:(id)arg1 graphHeight:(double)arg2;
- (id)labelSectionLayoutGuide;
- (id)paddleConnectorView;
- (id)paddleView;
- (id)paddleViewCenterXConstraint;
- (id)paddleViewConnectorCenterXConstraint;
- (void)selectBarWithClosestHorizontalPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectedBarView;
- (void)setBarSectionLayoutGuide:(id)arg1;
- (void)setBarViewHeightConstraints:(id)arg1;
- (void)setBarViews:(id)arg1;
- (void)setBedtime:(id)arg1;
- (void)setBedtimeFieldLayoutGuide:(id)arg1;
- (void)setBedtimeFields:(id)arg1;
- (void)setDataSet:(id)arg1;
- (void)setDataSet:(id)arg1 animated:(bool)arg2;
- (void)setGraphLayoutGuide:(id)arg1;
- (void)setHorizontalBaseline:(id)arg1;
- (void)setLabelSectionLayoutGuide:(id)arg1;
- (void)setPaddleConnectorView:(id)arg1;
- (void)setPaddleView:(id)arg1;
- (void)setPaddleViewCenterXConstraint:(id)arg1;
- (void)setPaddleViewConnectorCenterXConstraint:(id)arg1;
- (void)setSelectedBarView:(id)arg1;
- (void)setUpBarViewHeightContraints;
- (void)setUpBedtimeFields;
- (void)setUpGraphWithDividerInterval:(unsigned long long)arg1 labelFormatter:(id)arg2;
- (void)setUpWeeklyAverageLine:(bool)arg1;
- (void)setVerticalDividers:(id)arg1;
- (void)setVerticalLayoutGuides:(id)arg1;
- (void)setWeeklyAverageHeightConstraint:(id)arg1;
- (void)setWeeklyAverageLayoutGuide:(id)arg1;
- (void)setWeeklyAverageLine:(id)arg1;
- (void)setWeeklyAverageTrailingConstraint:(id)arg1;
- (id)titleView;
- (void)updateBarViews;
- (id)verticalDividers;
- (id)verticalLayoutGuides;
- (id)weeklyAverageHeightConstraint;
- (id)weeklyAverageLayoutGuide;
- (id)weeklyAverageLine;
- (id)weeklyAverageTrailingConstraint;

@end