//
//  CUnion.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/2.
//

#include "CUnion.h"
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

void testUnion (void) {
    
    //注：同一时间只用到一个成员，因此所有的成员都能完好输出
    union Data data;
    data.i = 10;
    printf("data i:%d  \n", data.i);
    
    data.f = 22.5;
    printf("data f:%f  \n", data.f);
    
    strcpy(data.str, "C Programming");
    printf("data str:%s \n", data.str);
    
//    printf("memory size:%d \n", sizeof(data));
//    printf("data i:%d  \n", data.i);
//    printf("data f:%f  \n", data.f);
//    printf("data str:%s \n", data.str);
}

