/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder  {
    NSArray *_queueItems;
}

@property(readonly) NSArray * items;


- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (id)initWithItems:(id)arg1;
- (id)items;
- (void)dealloc;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (double)bookmarkTimeForIndex:(unsigned int)arg1;
- (unsigned int)numberOfPaths;
- (id)pathAtIndex:(unsigned int)arg1;

@end