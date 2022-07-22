//结构体变量所占内存长度是各成员所占内存长度之和。每个成员分别占其自己的内存单元。共用体变量所占内存长度等于最长的成员变量的长度。

#include <stdio.h>
#include <string.h>

union Test
{
    int i;
    double pi;
    char str[10];
};

int main(void)
{
    union Test test;
    test.i=205;
    test.pi=3.14;
    strcpy(test.str,"hello");

    printf("addr of test.i%p\n",&test.i);
    printf("addr of test.pi%p\n",&test.pi);
    printf("addr of test.str%p\n",&test.str);
//共用同一个地址连续赋值，会报错，只有最后赋值的值有效
    printf("test.i:%d\n",test.i);
    printf("test.pi:%f\n",test.pi);
    printf("test.str:%s\n",test.str);

    printf("test:%d\n",sizeof(test));
}