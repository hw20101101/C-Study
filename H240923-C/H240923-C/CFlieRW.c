//
//  CFlieRW.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/3.
//

#include "CFlieRW.h"
#include <stdio.h>

void writeFile(void) {
    
    FILE *fp = NULL;
    
    //打开文件 或 新建一个文件
    fp = fopen("/Users/zhuanz1/tmp/test.txt", "w+");
    
    // 使用两个不同的函数写入两行
    fprintf(fp, "this is testing for fprintf...\n");
    
    // 把字符串 写入到 fp 所指向的输出流中
    fputs("this is testing for fputs...\n", fp);
    
    fclose(fp);
}

void readFile(void) {
    
    FILE *fp = NULL;
    char buff[255];
    
    fp = fopen("/Users/zhuanz1/tmp/test.txt", "r");
    fscanf(fp, "%s", buff); // 从文件中读取字符串，但是在遇到第一个空格和换行符时，它会停止读取
    printf("1: %s \n", buff);
    
    fgets(buff, 255, (FILE *)fp); // 从 fp 所指向的输入流中读取 n - 1 个字符
    printf("2: %s \n", buff);
    
    fgets(buff, 255, (FILE *)fp);
    printf("3: %s \n", buff);
    
    fclose(fp);
}
