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


int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    test1();
    
    return 0;
}
