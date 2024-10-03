//
//  CTypedef.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/3.
//

#include "CTypedef.h"
#include <stdio.h>

//使用 typedef 来为类型取一个别名（作为类型 unsigned char 的缩写）
typedef unsigned char BYTE;

void test(void) {
    
    BYTE b1, b2;
    
    b1 = 'c';
    b2 = 'd';
}

void testInputAndOutput(void) {
    
//    int c;
//    
//    printf("Enter a value:");
//    c = getchar(); // 这个函数在同一个时间内只会读取一个单一的字符。您可以在循环内使用这个方法，以便从屏幕上读取多个字符
//    
//    printf("\nYou entered:");
//    putchar(c); // 这个函数在同一个时间内只会输出一个单一的字符。您可以在循环内使用这个方法，以便在屏幕上输出多个字符
//    
//    printf("\n");
    
    //===
    
//    char str[100];
//    
//    printf("Enter a value:");
//    gets(str); //读取一行到 s 所指向的缓冲区，直到一个终止符
//    
//    printf("\nYou entered:");
//    puts(str); //把字符串 s 和一个尾随的换行符写入到 stdout
        
    //===
    
    char str2[100];
    int i;
    
    printf("Enter a value:");
    scanf("%s %d", str2, &i); //从标准输入流 stdin 读取输入
    
    printf("\nYou entered: %s %d \n", str2, i); //把输出写入到标准输出流 stdout
}
