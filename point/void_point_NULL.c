/* void指针通用指针，可以指向任意类型的数据。
   NULL指针 #define NULL ((void *)0)
*/

#include <stdio.h>
int main()
{
    /*
    int num = 1024;
    int *pi = &num;
    char *ps = "test";
    void *pv;
    pv = pi;
    printf("pi: %p,pv: %p\n", pi, pv);
    printf("*pv:%d\n",*(int *)pv);
    pv = ps;
    printf("pi: %p,pv: %p\n", pv, ps);
    printf("*pv:%s\n",(char *)pv);
    */
    int *p1;
    int *p2 = NULL;
    printf("%d\n", *p1);
    printf("%d\n", *p2);
    return 0;
}