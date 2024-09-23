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
int a1, b1;

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

static int count = 10; //全局变量

void test2(void){
    
    auto int temp; //默认的存储类
    
    register int temp2 = 10;
    
    static int some = 5; //局部变量，仅初始化一次
    some ++;
    printf("some:%d - count:%d \n", some, count);
}

// -------------------- C 常量 END --------------------

void test3(void){
    
    //位运算符
    unsigned int aa = 60; // 60 = 0011 1100
    unsigned int bb = 13; // 13 = 0000 1101
    int cc = 0;
    
    cc = aa & bb; // 12 = 0000 1100
    printf("cc value:%d \n", cc);
    
    cc = aa | bb; // 61 = 0011 1101
    printf("2 cc value:%d \n", cc);
    
    cc = aa ^ bb; //49 = 0011 0001
    printf("3 cc value:%d \n", cc);
    
    
    // 杂项运算符
    int a = 4;
    short b;
    double c;
    int *ptr;
    
    printf("a size:%lu \n", sizeof(a));
    printf("b size:%lu \n", sizeof(b));
    printf("c size:%lu \n", sizeof(c));
    
    ptr = &a; //ptr 包含 a 的地址
    printf("a value:%d \n", a);
    printf("*ptr:%d \n", *ptr);
}

int count22;
extern void write_extern(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    //test1();

    /*
    while (count--) {
        test2();
    } */
    
    //count22 = 5;
    //write_extern();
    
    test3();
    
    return 0;
}
