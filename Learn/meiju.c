//
//  meiju.c
//  Learn
//
//  Created by enroban on 2019/5/17.
//  Copyright © 2019 enroban. All rights reserved.
//
#include <stdio.h>
#include "meiju.h"

enum DAY
{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};

int meju(){
    
    enum DAY day;
    day = WED;
    printf("%d",day);
    
    return 0;
}


