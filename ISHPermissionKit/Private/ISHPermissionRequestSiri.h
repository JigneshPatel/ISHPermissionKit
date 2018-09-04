//
//  ISHPermissionRequestSiri.h
//  ISHPermissionKit
//
//  Created by Hagi on 24/08/16.
//  Copyright © 2016 iosphere GmbH. All rights reserved.
//

#import "ISHPermissionRequest.h"

#ifdef ISHPermissionRequestSiriEnabled

/**
 *  Permission request for Siri to access your app's data.
 *
 *  @sa ISHPermissionCategorySiri
 */
@interface ISHPermissionRequestSiri : ISHPermissionRequest

@end

#endif
