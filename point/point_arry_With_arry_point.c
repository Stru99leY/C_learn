#include <stdio.h>
int main()
{
    // char str[] = "I love study!";
    // char *target = str;
    // int count = 0;
    // while (*target++ != '\0')
    // {
    //     count++;
    // }
    // printf("%d个字符\n", count);
    /* 指针数组*/
    int temp[5] = {1, 2, 3, 4, 5};
    int(*p2)[5] = &temp;
    // int (*p2)[5]={1,2,3,4,5}; 这样写是错误的
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(*p2 + i));
    }
    return 0;
}