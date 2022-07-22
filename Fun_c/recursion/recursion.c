/*
递归必须有结束条件！
调用函数本身
设置结束条件
*/

#include <stdio.h>

long recursion();

long recursion(int n)
{
    long res;
    if (n){
        res=n*recursion(n-1);
    }
    else
    {
        res=1;
    }
    return res;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("阶乘是：%d\n",recursion(n));
    return 0;
}