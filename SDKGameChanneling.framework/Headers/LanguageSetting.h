//
//  LanguageSetting.h
//  SDKLite
//
//  Created by Duc Viet on 8/7/18.
//  Copyright © 2018 DucViet. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LanguageSetting : NSObject
+(void)initialize;
+(void)setLanguage:(NSString *)l;
+(NSString *)get:(NSString *)key alter:(NSString *)alternate;
@end
