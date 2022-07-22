#include <stdio.h>

#define SQUARE(x) ((x)*(x))

int main(int argc, char const *argv[])
{
    int i=1;
    while (i<=100)
    {
        printf("%d的平方是%d\n",i-1,SQUARE(++i));//((i++)*(i++)) 入栈顺序从右往左
    }
    
    return 0;
}
