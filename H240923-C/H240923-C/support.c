//
//  support.c
//  H240923-C
//
//  Created by hwacdx on 2024/9/23.
//  extern 存储类用于定义在其他文件中声明的全局变量或函数

#include <stdio.h>

extern int count22;

void write_extern(void) {
    printf("count is %d \n", count22);
}
