//
//  zifuchuan.c
//  Learn
//
//  Created by enroban on 2019/5/18.
//  Copyright © 2019 enroban. All rights reserved.
//

#include "zifuchuan.h"

void zifuchuan(){
    char greeting[] = "你好";
    
//    char greeting[] = {"你", "说"};
    
    printf("Greeting message: %s\n", greeting );
    
    
    /*输出中文*/
    const char str[] = "这里全是中文";
    printf("\n输出字符数:%d\n", printf(str));
    puts(str);
}
