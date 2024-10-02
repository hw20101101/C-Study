//
//  CStruct.c
//  H240923-C
//
//  Created by hwacdx on 2024/10/2.
//

#include "CStruct.h"
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}; //book = {"C 语言", "RUNOOB", "编程语言", 10086};

//将结构体作为参数
void printBook(struct Books book) {
    
    printf("title:%s - author:%s - subject:%s - id:%d \n", book.title, book.author, book.subject, book.book_id);
}

//为了使用指向该结构的指针访问结构的成员，必须使用 -> 运算符
void printBook2(struct Books *book) {
    
    printf("title:%s - author:%s - subject:%s - id:%d \n", book->title, book->author, book->subject, book->book_id);
}

void testStruct(void) {
    
    struct Books book1;
    struct Books book2;
    
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 10001;
    
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 10002;
    
//    printBook(book1);
//    printBook(book2);
    
    //指向结构体的指针
    printBook2(&book1);
    printBook2(&book2);
    
    //计算结构体的大小
    printf("结构体的大小:%zu \n", sizeof(book1));
}


