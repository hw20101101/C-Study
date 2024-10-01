//
//  COperator.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/1.
//

#include "COperator.h"


void test3(void) {
    
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
