/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class CALayer, NSTrackingArea;

@interface NCRoundedWindowContentView : NSView
{
    CALayer *_backgroundLayer;
    double _height;
    NSTrackingArea *_dragTrackingArea;
    double _lastDragDeltaX;
    BOOL _dragStartedLeft;
    BOOL _wasAcceptingMouseEvents;
    BOOL _mouseDownInView;
    BOOL _dragging;
    BOOL _delegateSupportsClick;
    BOOL _delegateSupportsEnterExit;
    BOOL _delegateSupportsCloseButton;
    BOOL _delegateSupportsScroll;
    BOOL _delegateSupportsDragging;
    BOOL _delegateSupportsLayout;
    BOOL _setupLayer;
    BOOL _contentHidden;
    id <NCRoundedWindowContentDelegate> _delegate;
}

@property(nonatomic) id <NCRoundedWindowContentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL contentHidden; // @synthesize contentHidden=_contentHidden;
- (void)_closeButtonPressed:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)scrollWheel:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateLayer;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)layout;
- (void)_updateBackgroundLayer;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

