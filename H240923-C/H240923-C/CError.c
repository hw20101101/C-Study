//
//  CError.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/4.
//

#include "CError.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>

void testError(void) {
    FILE *pf;
    int errNum;
    pf = fopen("unexist.txt", "rb");
    
    if (pf == NULL) {
        errNum = errno;
        fprintf(stderr, "错误号: %d \n", errno);
        
        perror("通过 perror 输出错误");
        
        fprintf(stderr, "打开文件错误: %s \n", strerror(errNum));
    } else {
        fclose(pf);
    }
}

