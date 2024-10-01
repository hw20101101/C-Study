//
//  CConst.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/1.
//

#include "CConst.h"


#define PI 3.14159 //预处理器（文本替换，无类型检查和作用域）

const int MAX_WIDTH = 100; //有类型检查和作用域 优势；有助于调试和可读性

static int count = 10; //全局变量

void test2(void) {
    
    auto int temp; //默认的存储类
    
    register int temp2 = 10;
    
    static int some = 5; //局部变量，仅初始化一次
    some ++;
    printf("some:%d - count:%d \n", some, count);
}
