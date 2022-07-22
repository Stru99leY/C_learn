#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr1=NULL;
    int *ptr2=NULL;

    ptr1 = (int*)malloc(sizeof(int));
    ptr2 = (int*)malloc(sizeof(int));
    //指针存放地址与指针指向地址
    printf("stack %p -> %p\n",&ptr1,&ptr2);//指针自己的地址，栈
    printf("heap %p -> %p\n",ptr1,ptr2);//指针变量里存放的动态内存地址，堆
    return 0;
}
