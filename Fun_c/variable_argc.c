#include <stdio.h>
#include <stdarg.h>

int sum(int n,...);

int sum(int n,...)
{
    int i,sum=0;
    va_list VAP;//定义参数列表
    va_start(VAP,n);//初始化参数列表
    for (int i = 0; i < n; i++)
    {
        sum+=va_arg(VAP,int);//获取每一个参数的值，类型
    }
    va_end(VAP);//  关闭参数列表

    return sum;
    
}

int main(){


    int res;
    res=sum(3,1,23,4);
    printf("Res= %d\n",res);

    res=sum(3,1,3,4);
    printf("Res= %d\n",res);

    res=sum(3,1,-3,4);
    printf("Res= %d\n",res);
    return 0;
}