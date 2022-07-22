/*
C语言5种不同的存储类型
-auto 在代码块中声明的变量默认的存储类型 none属性
-register 寄存器变量 当你将变量声明为寄存器变量后无法通过取地址运算符&获得该变量地址
-static 生存期与全局变量一样，直到程序结束才被释放
-extern
-typedef
*/


/* register
#include <stdio.h>

int main(void)
{
    register int i = 1;
    printf("%p\n", &i);
    return 0;
}
*/

#include <stdio.h>

void func(void);
void func(){

    static int count =0;

    printf("count = %d\n",count);
    
    count++;
}

int main(void){
    for (int i = 0; i < 10; i++)
    {
        func();
    }
    return 0;
}