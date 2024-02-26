/* 
 * This file is part of the SpareKit distribution https://github.com/SpareKit
 * Copyright (c) 2024 Mustafa Malik.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

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
