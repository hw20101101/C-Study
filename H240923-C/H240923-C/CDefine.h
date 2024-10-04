//
//  CDefine.h
//  H240923-C
//
//  Created by hwacdx on 2024/10/4.
//

#ifndef CDefine_h //避免多次引用头文件导致报错
#define CDefine_h //当再次引用头文件时，条件为假，因为 HEADER_FILE 已定义。此时，预处理器会跳过文件的整个内容，编译器会忽略它

#include <stdio.h>
void testDefine(void);
void testType(void);

#endif /* CDefine_h */
