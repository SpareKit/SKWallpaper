# SKWallpaper
Get the current file path location of the currently selected macOS Wallpaper

## Usage

```objc

// Return an NSURL to the location
NSURL* url = [SKWallPaper getCurrentWallpaperPath:[NSScreen mainScreen]];
```

```objc
// Setting a wallpaper
NSScreen* screen = [NSScreen mainScreen];        
NSError* fail = [SKWallPaper setWallpaperForScreen:@"/Users/username_here/path_to_image/image_name_here.jpg":screen];

if (fail != nil) {
    NSLog(@"%@\n", [fail localizedFailureReason]);
} else {
    NSLog(@"Done!");
}
```

## Want to use this in a Swift project?

Follow this [tutorial](https://stackoverflow.com/questions/24002369/how-do-i-call-objective-c-code-from-swift) to find out more

See LICENSE for more details.
Copyright (c) 2024, Mustafa Malik.
