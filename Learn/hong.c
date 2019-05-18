//
//  hong.c
//  Learn
//  宏学习
//  Created by enroban on 2019/3/21.
//  Copyright © 2019 enroban. All rights reserved.
//

#include "hong.h"

#include <stdio.h>
#define M (n*n+3*n)

int hong(){
    int sum, n;
    printf("Input a number: ");
    scanf("%d", &n);
    sum = 3*M+4*M+5*M;
    printf("sum=%d\n", sum);
    return 0;
}
