//
//  main.m
//  ContactList
//
//  Created by Filipe Malachias Resende on 2019-08-07.
//  Copyright © 2019 malachias. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Contact.h"


NS_ASSUME_NONNULL_BEGIN

@interface ContactList : NSObject

@property (nonatomic, strong) NSMutableArray *list;

-(void)addContact:(Contact *)newContact;

-(void)printList;

@end

NS_ASSUME_NONNULL_END
