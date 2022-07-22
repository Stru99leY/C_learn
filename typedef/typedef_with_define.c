/*
相比起宏定义，typedef是对类型的封装
*/
#include <stdio.h>

//#define integer int
typedef int integer;//改成define会报错
typedef int *print;

int main(int argc, char const *argv[])
{
    //    unsigned integer a;用typedef会报错
    integer a = 520;
    print b, c;
    b = &a;
    c = b;
    printf("addr of a = %p\n", c);
    printf("addr of a = %p\n", b);
    printf("addr of a = %p\n", &a);
    //   a = 1;
    // printf("%u\n", a);//补码按位取反，然后加1 所以-1会变成32个全1然后当成无符号正数输出

    return 0;
}
