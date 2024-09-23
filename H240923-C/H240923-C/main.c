//
//  main.c
//  H240923-C
//
//  Created by hwacdx on 2024/9/23.
//

#include <stdio.h>

// -------------------- C 变量 START--------------------

//外部变量声明
extern int x, y;

//定义全局变量
int a, b;

void test1(void){
    
    int *ptr;
    int i, j, k;
    
    char ch = 'A';
    //byte z = 22;
    
    int ii = ch;
    
    char ch2[] = "char yes";
    
    printf("ch:%c - ii:%d - ch2:%s \n", ch, ii, ch2);
}

// -------------------- C 变量 END --------------------


// -------------------- C 常量 START --------------------

#define PI 3.14159 //预处理器（文本替换，无类型检查和作用域）

const int MAX_WIDTH = 100; //有类型检查和作用域 优势；有助于调试和可读性

// -------------------- C 常量 END --------------------

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    test1();
    
    return 0;
}
