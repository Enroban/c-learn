//
//  main.c
//  Learn
//
//  Created by enroban on 2019/3/21.
//  Copyright © 2019 enroban. All rights reserved.
//

#include <stdio.h>
#include "zifuchuan.h"

int main(int argc, const char * argv[]) {
//     insert code here...
//    printf("你好 Hello, World!\n");
    
    const char str[] = "这里全是中文";
    printf("\n输出字符数:%d\n", printf(str));
    puts(str);

    zifuchuan();
}

