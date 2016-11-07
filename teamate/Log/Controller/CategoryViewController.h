//
//  CategoryViewController.h
//  teamate
//
//  Created by 瑞宁科技02 on 2016/10/28.
//  Copyright © 2016年 reining. All rights reserved.
//

#import "BaseTableViewController.h"
typedef void(^passStringBlock)(NSString *name);

@interface CategoryViewController : BaseTableViewController
@property (nonatomic ,strong)NSString *pagetitle;
@property (nonatomic ,strong)NSArray *arr;
@property(nonatomic ,copy)passStringBlock passString;

@end
