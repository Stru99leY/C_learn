#include <stdio.h>

struct Date
{
    int year;
    int mont;
    int day;
};

struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
} book={
    "《上岸》",
    "余小鱼",
    66.66,
    {2023,12,26},
    "人民出版社"

};

int main(int argc, char const *argv[])
{
    // printf("请输入书名:");
    // scanf("%s",book.title);
    // printf("请输入作者:");
    // scanf("%s",book.author);
    // printf("请输入价格:");
    // scanf("%f",&book.price);
    // printf("请输入出版日期:");
    // scanf("%d",&book.date);
    // printf("请输入出版社:");
    // scanf("%s",book.publisher);
    struct Book *pt;
    pt=&book;
    printf("========数据录入完毕========\n");
    printf("书名: %s\n",&pt->title);//与pt->一样
    printf("作者: %s\n",pt->author);
    printf("价格: %.2f\n",pt->price);
    printf("出版日期: %d-%d-%d\n",pt->date.year,pt->date.mont,pt->date.day);
    printf("出版社: %s\n",pt->publisher);


    return 0;
}

