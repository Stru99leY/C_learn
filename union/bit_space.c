#include <stdio.h>

int main(int argc, char const *argv[])
{
    struct Test
    {
        unsigned int a:1;/* data */
        unsigned int b:1;/* data */
        unsigned int c:2;//位域不能取址
        unsigned int  :1;//无名位域，不能使用
    };
    struct Test test;
    {
        test.a = 1;
        test.b = 1;
        test.c = 2;
    };
    
    printf("a=%d b=%d c=%d\n", test.a, test.b, test.c);
    printf("size of test = %d\n", sizeof(test));
    
    
    return 0;
}
