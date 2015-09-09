//
//  HttpHelper.h
//  VoiceImage
//
//  Created by SPG on 7/6/15.
//  Copyright (c) 2015 SPG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@protocol HttpProtocl <NSObject>

@optional

-(void)isSearchDone:(NSString *)searchTag;

@end

@interface HttpHelper : NSObject

@property (nonatomic, weak) id<HttpProtocl> delegate;


+(instancetype) sharedHttpHelper;

-(void) AFNetworingForRegistry;
-(void) AFNetworingForLoginWithGUID:(NSString *)guid;
-(void) AFNetworingForUploadWithUserId:(NSString *)guid ImageName:(NSString *)imageName ImagePath:(NSString *)imagePath Desc:(NSString *)desc Tag:(NSString *)tag Time:(NSString *)time Loc:(NSString *)loc Token:(NSString *)token;
-(void) AFNetworingForSearchWithUserId:(NSString *)guid Desc:(NSString *)desc Tag:(NSString *)tag Loc:(NSString *)loc Token:(NSString *)token RefreshObject:(id)object;


//分词
-(void) AFNetworkingForVoiceTag:(NSString *)desc forInserting:(NSDictionary *)insert orSearching:(id) object;

//imagePath -> asset -> image
-(UIImage *)fullResolutionImageFromALAsset:(ALAsset *)asset;

@end
