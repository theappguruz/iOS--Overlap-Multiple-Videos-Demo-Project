//
//  ViewController.h
//  OverlapVideos
//
//  Created by TheAppGuruz-iOS-103 on 11/04/14.
//  Copyright (c) 2014 TheAppGuruz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

@interface ViewController : UIViewController
{
    MPMoviePlayerController *moviePlayer;
}
@property (weak, nonatomic) IBOutlet UIView *vwMoviePlayer;
@property (weak, nonatomic) IBOutlet UILabel *label;
@end
