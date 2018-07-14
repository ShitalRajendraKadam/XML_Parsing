//
//  ViewController.h
//  IOS_XML_Parsing
//
//  Created by Student P_02 on 30/06/18.
//  Copyright © 2018 Shital. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<NSXMLParserDelegate,UITableViewDelegate,UITableViewDataSource>

@property NSMutableString *charString;
@property NSMutableArray *plantArray;
@property NSXMLParser *saxParser;
@end

