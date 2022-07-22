#include <stdio.h>

void get_Array(int a[10]);

void get_Array(int a[10])
{
    printf("%d\n",sizeof(a));
    a[5] = 520;
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

int main()
{

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("size of a:%d\n",sizeof(a));
    // get_Array(a);
    // printf("在main函数再打印一次\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("a[%d] = %d\n", i, a[i]);
    // }

    return 0;
}