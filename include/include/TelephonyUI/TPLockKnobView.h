/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

@class TPBottomLockBar, UIAlphaAnimation;

@interface TPLockKnobView : UIView
{
    TPBottomLockBar *_track;
    UIAlphaAnimation *_animation;
    float _centerDelta;
    BOOL _tracking;
}

- (void)dealloc;	// IMP=0x32639f4c
- (void)mouseDown:(struct __GSEvent *)fp8;	// IMP=0x32639f8c
- (void)mouseDragged:(struct __GSEvent *)fp8;	// IMP=0x3263a0a4
- (void)mouseUp:(struct __GSEvent *)fp8;	// IMP=0x3263a2d4
- (BOOL)pointInside:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;	// IMP=0x32639ebc
- (void)setLockView:(id)fp8;	// IMP=0x32639f44

@end

