//
//  CString.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/2.
//

#include "CString.h"
#include "string.h"

void testString(void) {
    
    char site[14] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    char site2[7] = "google";
    char site3[7]; //"RUN 2";
    
    //复制 site 到 site3
    strcpy(site3, site);
    printf("site:%s - site3:%s \n", site, site3);
    
    //连接 site 和 site2；定义 site 时需注意其长度，防止报错
    strcat(site, site2);
    printf("site:%s \n", site);
    
    //获取字符串长度
    int len = strlen(site);
    printf("len:%d \n", len);
}
