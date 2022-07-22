//函数指针作为参数
/*
#include <stdio.h>

int add(int, int);
int sub(int, int);
int calc(int (*fp)(int,int),int,int);

int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int calc(int(*fp)(int,int),int num1,int num2)//第一个参数 函数指针
{
    return (*fp)(num1,num2);
}
int main()
{
    printf(" 3 + 5 = %d\n",calc(add,3,5));

    printf(" 3 - 5 = %d\n",calc(sub,3,5));


    return 0;
}
*/
//函数指针作为返回
#include <stdio.h>

typedef int (*PTR_TO_FUN)(int,int);

int add(int,int);
int sub(int,int);
int calc(PTR_TO_FUN,int,int);
PTR_TO_FUN select(char);//返回值是返回一个整型并且带有两个参数的函数指针
int add (int num1,int num2){
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int calc(int(*fp)(int,int),int num1,int num2)
{
    return (*fp)(num1,num2);
}
int (*select(char op))(int,int){
    switch (op)
    {
    case '+':return add;
    case '-':return sub;
    }
}

int main()
{
    int num1,num2;
    char op;
    int (*fp)(int,int);
    printf("请输入一个式子:\n");
    scanf("%d%c%d",&num1,&op,&num2);

    fp=select(op);
    printf("%d %c %d =%d\n",num1,op,num2,calc(fp,num1,num2));

    return 0;
}