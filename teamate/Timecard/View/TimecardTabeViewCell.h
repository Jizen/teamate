//
//  TimecardTabeViewCell.h
//  teamate
//
//  Created by 瑞宁科技02 on 2016/10/28.
//  Copyright © 2016年 reining. All rights reserved.
//

#import "BaseTableViewCell.h"

@interface TimecardTabeViewCell : BaseTableViewCell
@property (nonatomic ,strong)UIImageView *timecardImage;
@property (nonatomic ,strong)UILabel *onwork;
@property (nonatomic ,strong)UILabel *time;
@property (nonatomic ,strong)UIButton *signButton;
@property (nonatomic ,strong)UILabel *signinLabel;
@property (nonatomic ,strong)UIButton *noteBtn;
@end
