//
//  PostosTableViewController.h
//  Postos
//
//  Created by Patrick Nascimento on 22/11/16.
//  Copyright © 2016 iesb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PostoDAO.h"

@interface PostosTableViewController : UITableViewController


@property NSMutableArray *postos;
@property PostoDAO *dao;
@property Posto *postoSelecionado;


@end
