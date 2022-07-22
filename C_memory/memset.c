#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int main(void)
{
    int *ptr=NULL;
    int i;
    ptr=(int *)malloc(N*sizeof(int));
    if (ptr==NULL)
    {
        exit(1);
    }
    memset(ptr,0,N*sizeof(int));//初始化的内存块，初始化的常量 尺寸大小
    for (int i = 0; i < N; i++)
    {
        printf("%3d",ptr[i]);
    }
    putchar('\n');
    
    free(ptr);
    
    return 0;
}