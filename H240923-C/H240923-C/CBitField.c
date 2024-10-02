//
//  CBitField.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/2.
//  位域（bit-field）是一种特殊的结构体成员，允许我们按位对成员进行定义，指定其占用的位数。

#include "CBitField.h"

//定义普通的结构体(占用 8 字节的内存空间)
struct Packed {
    unsigned int width;
    unsigned int height;
} status1;

//定义位域结构体(占用 4 字节的内存空间)
struct Packed2 {
    unsigned int width : 1;
    unsigned int height : 1;
} status2;

struct Packed3 {
    unsigned int f1 : 1; //1位的位域
    unsigned int type : 4; //4位的位域
    unsigned int my_int : 9; //9位的位域
};

struct  {
    unsigned int age : 3;
} Age;

struct bs {
    unsigned a : 4;
    unsigned   : 4; //空域
    unsigned c : 4; //从下一单元开始存放
    unsigned d : 4;
};

struct bs2 {
    unsigned a : 1;
    unsigned b : 3;
    unsigned c : 4;
} bit, *pbit;

void testBitField(void) {
    
    printf("memory size:%d \n", sizeof(status1));
    printf("memory size2:%d \n", sizeof(status2));
    
    struct Packed2 packed;
    packed.width = 1;
    packed.height = 0;
    printf("width:%u - height:%u \n", packed.width, packed.height);
    
    struct Packed3 packed3;
    packed3.f1 = 1;
    packed3.type = 7;
    packed3.my_int = 255;
    printf("f1:%u - type:%u - my_int:%d \n", packed3.f1, packed3.type, packed3.my_int);
    
    Age.age = 4;
    printf("Age size :%d \n", sizeof(Age));
    printf("age: %d \n", Age.age);
    
    Age.age = 7;
    printf("age: %d \n", Age.age);
    
    //Age.age = 8; //注：二进制表示为 1000 有4位，超出
    printf("age: %d \n", Age.age);
    
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    
    printf("bs2 - a:%d b:%d c:%d \n", bit.a, bit.b, bit.c);
    
    pbit = &bit; //赋值给指针变量
    pbit->a = 0;
    pbit->b &= 3;
    pbit->c |= 1;
    
    //用指针方式输出
    printf("bs2 - a:%d b:%d c:%d \n", pbit->a, pbit->b, pbit->c);
}
