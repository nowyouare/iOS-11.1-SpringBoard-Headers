//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBIconColorSettings : SBUISettings
{
    _Bool _blurryFolderIcons;
    _Bool _blurryCloseBoxes;
    _Bool _suppressJitter;
    _Bool _closeBoxesEverywhere;
    double _maxSaturationBoost;
    double _maxSaturation;
    double _maxBrightnessBoost;
    double _maxBrightness;
    double _colorAlpha;
    double _whiteAlpha;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool closeBoxesEverywhere; // @synthesize closeBoxesEverywhere=_closeBoxesEverywhere;
@property(nonatomic) _Bool suppressJitter; // @synthesize suppressJitter=_suppressJitter;
@property(nonatomic) double whiteAlpha; // @synthesize whiteAlpha=_whiteAlpha;
@property(nonatomic) double colorAlpha; // @synthesize colorAlpha=_colorAlpha;
@property(nonatomic) double maxBrightness; // @synthesize maxBrightness=_maxBrightness;
@property(nonatomic) double maxBrightnessBoost; // @synthesize maxBrightnessBoost=_maxBrightnessBoost;
@property(nonatomic) double maxSaturation; // @synthesize maxSaturation=_maxSaturation;
@property(nonatomic) double maxSaturationBoost; // @synthesize maxSaturationBoost=_maxSaturationBoost;
@property(nonatomic) _Bool blurryCloseBoxes; // @synthesize blurryCloseBoxes=_blurryCloseBoxes;
@property(nonatomic) _Bool blurryFolderIcons; // @synthesize blurryFolderIcons=_blurryFolderIcons;
- (void)setDefaultValues;

@end
