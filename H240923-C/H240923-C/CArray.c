//
//  CArray.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/1.
//

#include "CArray.h"


void test4(void) {
    
    //数组
    //double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    //double salary = balance[3];
    
    
    //访问数组元素
    int n[10];
    int i, j;
    
    for (i = 0; i < 10; i ++) {
        n[i] = i + 100;
    }
    
    for (j = 0; j < 10; j ++) {
        printf("Element[%d] = %d \n", j, n[j]);
    }
    
    //获取数组长度
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("length:%d \n", length);
}
