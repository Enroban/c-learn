//
//  meiju.c
//  Learn
//
//  Created by enroban on 2019/5/17.
//  Copyright © 2019 enroban. All rights reserved.
//
#include "meiju.h"

#include <stdio.h>

enum DAY
{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};

void meiju(){
    
    enum DAY day;
    day = WED;
    printf("%d\n",day);
}


