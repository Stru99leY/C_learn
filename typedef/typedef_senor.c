#include <stdio.h>
/*
typedef int (*PTR_TO_ARRAY)[3];
int main(int argc, char const *argv[])
{
    int array[3] = {1, 2, 3};
    PTR_TO_ARRAY ptr_to_array = &array;
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("%d\n", (*ptr_to_array)[i]);
    }
    
    return 0;
}
*/

/*
typedef int (*PTR_TO_FUN)(void);//指向函数的指针
int fun (void)
{
    return 520;
}

int main(int argc, char const *argv[])
{
    PTR_TO_FUN ptr_to_fun = fun;
    printf("%d\n", ptr_to_fun());
    return 0;
}
*/

typedef int (*PTR_TO_FUN)(int);//指向函数的指针
int *funA(int num)
{
    printf("%d\n", num);
    return &num;//栈的数据是临时的，实际上这一句没有任何意义
}
int *funB(int num)
{
    printf("%d\n", num);
    return &num;//栈的数据是临时的，实际上这一句没有任何意义
}
int *funC(int num)
{
    printf("%d\n", num);
    return &num;//栈的数据是临时的，实际上这一句没有任何意义
}

int main(int argc, char const *argv[])
{
    PTR_TO_FUN array[3] = {&funA, &funB, &funC};
    for (int i = 0; i < 3; i++)
    {
        printf("addr of num:%p\n",(*array[i])(i));
    }
    
    return 0;
}
