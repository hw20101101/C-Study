//
//  CPoint.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/1.
//

#include <stdio.h>
#include <stdlib.h>

void test5(void) {
    
    int var = 10; //局部变量
    int *ip;      //指针变量
    ip = &var;    //在指针变量中存储 var 的地址
    
    printf("var 变量的地址:%p \n", &var); //0x16fdff28c
    
    printf("ip 变量存储的地址:%p \n", ip); //0x16fdff28c
    
    printf("*ip 变量的值:%d \n", *ip); //10
    
    //空指针
    int *ptr = NULL;
    
    if (ptr) { //非空
        printf("ptr 的地址 %p \n", ptr);
    } else { //空
        printf("2 ptr 的地址 %p \n", ptr); //0x0
    }
}

// -------------------- 函数指针 START --------------------
int max(int x, int y) {
    return x > y ? x : y;
}

void test6(void) {
    
    //p 是函数指针
    int (*p)(int, int) = &max;
    int a, b, c, d;
    
    printf("请输入3个数字:");
    scanf("%d %d %d", &a, &b, &c);
    
    // 与直接调用 max(max(a, b), c) 等价
    d = p(p(a, b), c);
    printf("max num:%d \n", d);
}

// -------------------- 函数指针 END --------------------


// -------------------- 回调函数 START --------------------

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void)) {
    for (size_t i = 0; i < arraySize; i++) {
        array[i] = getNextValue();
    }
}

//获取随机值
int getNextRandomValue(void) {
    return rand();
}

// -------------------- 回调函数 END --------------------


