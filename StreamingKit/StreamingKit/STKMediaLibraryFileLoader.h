//
//  STKMediaLibraryFileLoader.h
//  CloudPlayer
//
//  Created by iMac_1 on 8/29/17.
//  Copyright © 2017 MagicUniverse. All rights reserved.
//

#import "STKLocalFileDataSource.h"

@interface STKMediaLibraryFileLoader : NSObject
+ (STKLocalFileDataSource *)localFileDataSourceWithMediaLibraryURL:(NSURL *)url;
@end
