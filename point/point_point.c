#include <stdio.h>
int main(){
    /* 
    int num = 50;
    int *p=&num;
    int **pp=&p;
    printf("num: %d\n *p: %d\n**pp:%d\n",num,*p,**pp);
    printf("&p: %p,pp: %p\n&num: %p,p: %p,*pp: %p\n",&p,pp,&num,p,*pp);
    */
   /*
   char *cBooks[]={
    "《c程序设计语言》",
    "《c专家编程》",
    "《c陷进与缺陷》",
    "《c Pimer Plus》"};
    char **mai;
    char **yihoumai[3];
    mai=&cBooks[2];
    yihoumai[0]=&cBooks[0];
    yihoumai[1]=&cBooks[1];
    yihoumai[2]=&cBooks[3];
    // 这里 不需要加 ** 因为cbook为字符数组 %s需要的是地址
    printf("%p\n",cBooks[2]);//这里加&取地址的话，取的是什么地址？
    printf("买:%p\n",*mai);
    printf("以后买:%p \n",*yihoumai[0]);
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",*yihoumai[i]);
    }
*/

    int array[3][4]={
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}};
    int (*p)[4]=array;


    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("%3d",*(*(p+i)+k));
        }
        printf("\n");
        
        //printf("%d\n",*(p+i));
    }

    // printf("p: %p,array: %p\n",p,array);
    // printf("p+1: %p,array+1: %p",p+1,array+1);


    return 0;
   }