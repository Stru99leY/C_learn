#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int *ptr = NULL;
    int num, i;
    printf("请输入待存入的整数个数:");
    scanf("%d",&num);
    ptr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        printf("请输入第%d个数:", i + 1);
        scanf("%d", ptr + i);
    }
    printf("你输入的整数是:");
    for (i = 0; i < num; i++)
    {
        printf("%3d", *(ptr + i));
    }
    putchar('\n');
    free(ptr);

    return 0;
}