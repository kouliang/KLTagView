//
//  KLTagView.h
//
//  Created by kouliang on 16/1/21.
//  Copyright © 2016年 kouliang. All rights reserved.
//

/**
 sample:
 
    NSArray *titles = @[@"奥迪", @"比亚迪", @"东风标致", @"大众", @"奔驰", @"长安马自达", @"丰田"];
    KLTagView *tagView = [[KLTagView alloc] initWithTitles:titles maxWidth:200];
    CGSize size = [tagView getContentSize];
    tagView.frame = CGRectMake(60, 100, size.width, size.height);
    [self.view addSubview:tagView];
 */

#import <UIKit/UIKit.h>

@interface KLTagView : UIView
- (instancetype)initWithTitles:(NSArray *)titles maxWidth:(CGFloat)width;
- (NSInteger)getSelectIndex;
- (NSInteger)getLines;
- (CGSize)getContentSize;
@end
