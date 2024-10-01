//
//  CExtern.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/1.
//  extern 存储类用于定义在其他文件中声明的全局变量或函数

#include "CExtern.h"


extern int count22;

void write_extern(void) {
    printf("count is %d \n", count22);
}


//外部变量声明
extern int x, y;

//定义全局变量
int a1, b1;

void test1(void) {
    
    int *ptr;
    int i, j, k;
    
    char ch = 'A';
    //byte z = 22;
    
    int ii = ch;
    
    char ch2[] = "char yes";
    
    printf("ch:%c - ii:%d - ch2:%s \n", ch, ii, ch2);
}
