//
//  PostoTableViewCell.h
//  Postos
//
//  Created by Patrick Nascimento on 22/11/16.
//  Copyright © 2016 iesb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PostoTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *CellImageView;

@property (weak, nonatomic) IBOutlet UILabel *CellLblName;

@property (weak, nonatomic) IBOutlet UILabel *etnLblPrice;

@property (weak, nonatomic) IBOutlet UILabel *gasLblPrice;

@property (weak, nonatomic) IBOutlet UILabel *gadLblPrice;

@property (weak, nonatomic) IBOutlet UILabel *oilLblPrice;

@property (weak, nonatomic) IBOutlet UIButton *goToBtn;

@end
