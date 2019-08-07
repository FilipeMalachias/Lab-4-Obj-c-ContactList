//
//  main.m
//  ContactList
//
//  Created by Filipe Malachias Resende on 2019-08-07.
//  Copyright © 2019 malachias. All rights reserved.
//

#import "Contact.h"

@implementation Contact

- (instancetype)initWithFullName:(NSString *)fullName email:(NSString *)email{
    self = [super init];
    if (self) {
        self.fullName = fullName;
        self.email = email;
    }
    return self;
}

@end
