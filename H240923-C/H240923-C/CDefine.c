//
//  CDefine.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/4.
//

#include "CDefine.h"

// 宏延续运算符 \
// 字符串常量化运算符 #
#define message_for(a, b) \
    printf(#a " and " #b " : We love you! \n")

// 预处理器 defined 运算符是用在常量表达式中的，用来确定一个标识符是否已经使用 #define 定义过
#if !defined (MESSAGE)
    #define MESSAGE "You wish!"
#endif

//参数化的宏
#define square(x) ( (x) * (x))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

void testDefine(void) {
    
    printf("file:%s \n", __FILE__);
    printf("date:%s \n", __DATE__);
    printf("time:%s \n", __TIME__);
    printf("line:%d \n", __LINE__);
    printf("ansi:%d \n", __STDC__);
    
    message_for(Carole, Debra);
    
    printf("Here is the message: %s \n", MESSAGE);
    
    printf("Max between 20 and 10 is %d \n", MAX(10, 20));
}

// 类型转换
// 整数提升: 把小于 int 或 unsigned int 的整数类型转换为 int 或 unsigned int 的过程

void testType(void){
    int i = 17;
    char c = 'c';    
    float sum = i + c;
    printf("Value of sum: %f \n", sum);
}

/*
 标准库 头文件  功能简介
 <stdio.h>    标准输入输出库，包含 printf、scanf 等函数
 <stdlib.h>    标准库函数，包含内存分配、程序控制等函数
 <string.h>    字符串操作函数，如 strlen、strcpy 等
 <math.h>    数学函数库，如 sin、cos、sqrt 等
 <time.h>    时间和日期函数，如 time、strftime 等
 <ctype.h>    字符处理函数，如 isalpha、isdigit 等
 <limits.h>    定义各种类型的限制值，如 INT_MAX 等
 <float.h>    定义浮点类型的限制值，如 FLT_MAX 等
 <assert.h>    断言宏 assert，用于调试检查
 <errno.h>    定义错误码变量 errno 及相关宏
 <stddef.h>    定义通用类型和宏，如 size_t、NULL 等
 <signal.h>    处理信号的函数和宏，如 signal 等
 <setjmp.h>    提供非本地跳转功能的宏和函数
 <locale.h>    地域化相关的函数和宏，如 setlocale 等
 */
