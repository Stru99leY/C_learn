//calloc 与 malloc 的区别前者申请完内存后会自动初始化内存空间为0，后者数据随机
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;
    int num = 123;
    ptr = (int *)malloc(sizeof(int)); //在堆上，不free会一直存在在堆上
    if (ptr == NULL)
    {
        printf("分配内存失败\n");
        exit(1);
    }
    printf("请输入一个整数:");
    scanf("%d", ptr);
    printf("您输入的整数是:%d\n", *ptr);
    ptr = &num;
    printf("您输入的整数是:%d\n", *ptr);
    free(ptr);


    return 0;
}