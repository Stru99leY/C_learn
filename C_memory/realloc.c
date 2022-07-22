#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i,num;
    int cnt=0;
    int *ptr=NULL;//这里必须初始化为null

    do
    {
        printf("请输入一个整数(输入-1结束):");
        scanf("%d",&num);
        cnt++;

        ptr=(int*)realloc(ptr,cnt*sizeof(int));//原来的内存够的话就会继续开拓空间，否则开拓新空间返回新的地址
        if (ptr==NULL)
        {
            exit(1);
        }
        ptr[cnt-1]=num;
    } while (num!=-1);
    printf("输入的整数分别是：");
    for (int i = 0; i < cnt; i++)
    {
        printf("%d   ",ptr[i]);
    }
    putchar('\n');


    free(ptr);

    return 0;

}