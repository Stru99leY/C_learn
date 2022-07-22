#include <stdio.h>
#include "a.c"
#include "b.c"
#include "c.c"
/*
int main(void)
{
    int i = 10; // i1
    {
        int i = 11; // i2
        {
            int i = 12; // i3
            printf("%d\n", i);
        }
        //i==110
        {
            printf("%d\n",i);
            int i = 13; // i4
            printf("%d\n", i);
        }
        printf("%d\n", i);
    }
    printf("%d\n", i);
}
*/

// file scope
/*
void func();

int main(void){
    extern int count;
    func();
    count ++;
    printf("In main count is %d\n",count);
    return 0;
}
int count;
void func(void){
    count++;
    printf("In Func count is %d\n",count);
}
*/
void a(void);
void b(void);
void c(void);
int count;//static sount 就会变成internal 在别的文件是看不到的

int main(void)
{

    a();
    b();
    c();
    b();
    printf("一共%d次\n", count);
}