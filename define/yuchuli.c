//在带参数的宏定义中，#运算符号后面应该跟一个参数，预处理器会把这个参数转换为一个字符串
//##被称为记号连接运算符
/*
#include <stdio.h>
#define STR(s) #s
int main(int argc, char const *argv[])
{
    printf("%s\n",STR(YHX));
    return 0;
}
*/

//##
#include <stdio.h>
#define together(x,y) x##y
int main(int argc, char const *argv[])
{
    printf("%d\n",together(2,50));
    return 0;
}
