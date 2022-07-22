#include <stdio.h>

int sum(int n);

int sum(int n){
    int res=0;
    do
    {
        res+=n;
    } while (n-->0);
    return res;
}

int main()
{   
    int n;
    printf("输入\n");
    scanf("%d",&n);
    printf("1+2+3+...+%d result is:%d\n",n,sum(n));
    return 0;

}