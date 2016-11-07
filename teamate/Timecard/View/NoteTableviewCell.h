//
//  NoteTableviewCell.h
//  teamate
//
//  Created by 瑞宁科技02 on 2016/10/31.
//  Copyright © 2016年 reining. All rights reserved.
//

#import "BaseTableViewCell.h"
#import "PlaceholderTextView.h"
@interface NoteTableviewCell : BaseTableViewCell
@property (nonatomic ,strong)UILabel *leftlabel;
@property (nonatomic, strong) PlaceholderTextView * textView;

@end
