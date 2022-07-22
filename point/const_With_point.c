/*  指针可以修改为指向不同的变量
    指针可以修改为指向不同的常量
    可以通过解引用来读取指针指向的数据
    不可以通过解引用修改指针指向的数据
    指向非常量的指针
        -指针本身不可被修改
        -指针指向的值可以被修改
    指向常量的指针
        -指针本身不可以被修改
        -指针指向的值也不可以被修改
*/

#include <stdio.h>
int main()
{
    int num = 532;
    const int cnum = 500;
    //int *const p=&num;
    const int *const p=&num;//右边这个num其实这样也起不到保护作用，num是int可以被修改，右端是cnum才能起到保护作用
    //*p=1024;
    printf("%d",*p);
    // p=&cnum;
    // printf("d\n",p);

    /*
    const int *pc = &cnum;
    printf("cnum: %d,&cnum: %p\n", cnum, &cnum);
    printf("*pc: %d,pc: %p\n", *pc, pc);

    pc = &num;
    printf("num: %d,&num: %p\n", num, &num);
    printf("*pc: %d,pc: %p\n", *pc, pc);
    num = 1024;
    */

    return 0;
}