#include <stdio.h> 

/*
void func();

int a,b= 520; //全局变量未赋值会自动初始化为0

void func()
{
    int b;
    a=660;
    b=120;

    printf("In Func,a = %d,b = %d\n",a,b);
}

int main(){
    printf("In main,a = %d,b = %d\n",a,b);
    func();
    printf("In main,a = %d,b = %d\n",a,b);//全局变量a没有赋值，所以在func里会改变a的值

    return 0;
}
*/
void func();

void func()
{
    extern int count;
    count++;
}
int count = 0;

int main()
{
    func();
    printf("%d\n",count);
    return 0;
}