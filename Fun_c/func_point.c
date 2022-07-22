/* 
函数指针：
指针函数 -> int *p();
函数指针 -> int(*p)();
*/
#include <stdio.h>

int sqare(int);

int sqare(int num){
    return num*num;
}

int main()
{
    int num;
    int (*fp)(int);

    scanf("%d",&num);

    fp=sqare;//fp=&sqare 等价 
    printf("%d * %d =%d\n",num,num,(*fp)(num));//fp(num) 等价
    return  0;
}