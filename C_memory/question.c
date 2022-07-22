#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a=0,b=0;
    int *p=(int*)&b;

    *p=258;
    printf("*p->%p,a->%p,b->%p\n",p,a,b);
    printf("%d %d\n",a,b);

    return 0;
}
