//
//  SKWallpaper.h
//  SKWallpaper
//
//  Created by Mustafa Malik on 26/02/2024.
//

#ifndef __SK_WALLPAPER_H__
#define __SK_WALLPAPER_H__

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

@interface SKWallPaper : NSObject

+ (NSURL*) getCurrentWallpaperPath:(NSScreen*)screen;

@end

@implementation SKWallPaper

+ (NSURL*) getCurrentWallpaperPath:(NSScreen*)screen {
    return [[NSWorkspace sharedWorkspace] desktopImageURLForScreen:screen];
}

@end

#endif /* __SK_WALLPAPER_H__ */
