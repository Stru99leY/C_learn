#include <stdio.h>
#include <stdlib.h>

int *func();

int *func(void)
{
    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int));//堆上申请空间
    if (ptr == NULL)
    {
        exit(1);
    }
    *ptr = 530;

    return ptr;
}
int main(int argc, char const *argv[])
{
    int *ptr = NULL;
    ptr = func();
    printf("%d", *ptr);
    free(ptr);
    return 0;
}
