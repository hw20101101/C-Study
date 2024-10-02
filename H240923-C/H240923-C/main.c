//
//  main.c
//  H240923-C
//
//  Created by hwacdx on 2024/9/23.
//

#include <stdio.h>
#include "CPoint.h"
#include "CArray.h"
#include "CExtern.h"
#include "CString.h"
#include "CStruct.h"
#include "CUnion.h"

int count22;
extern void write_extern(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    test1();

    /*
    while (count--) {
        test2();
    } */
    
    //count22 = 5;
    //write_extern();
    
    //test3();
    //test4();
    //test5();
    //test6();
    
    //测试回调函数
//    int myArray[10];
//    //注：getNextRandomValue 不能加括号，否则就不是函数指针
//    populate_array(myArray, 10, getNextRandomValue);
//    
//    for (int i = 0; i < 10; i++) {
//        printf("i:%d \n", myArray[i]);
//    }
    
    //测试字符串
    //testString();
    
    //testStruct();
    
    testUnion();
    
    return 0;
}
