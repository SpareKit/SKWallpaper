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

+ (NSError*) setWallpaperForScreen:(NSString*)filePath :(NSScreen*)screen;

@end

@implementation SKWallPaper

+ (NSURL*) getCurrentWallpaperPath:(NSScreen*)screen {
    return [[NSWorkspace sharedWorkspace] desktopImageURLForScreen:screen];
}

+ (NSError*) setWallpaperForScreen:(NSString *)filePath :(NSScreen *)screen {
    
    NSDictionary<NSWorkspaceDesktopImageOptionKey, id>* dict;
    NSURL* url = [[NSURL alloc] initFileURLWithPath:filePath];
    NSError* error;
    
    [[NSWorkspace sharedWorkspace] setDesktopImageURL:url forScreen:screen options:dict error:&error];
    
    return error;
}


@end

#endif /* __SK_WALLPAPER_H__ */
