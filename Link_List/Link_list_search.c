#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//声明
struct Book
{
    char title[128];
    char author[40];
    struct Book *next;
};
struct Book *searchBook(struct Book *lin, char *target);
void getInput(struct Book *book);
void addBook(struct Book **lib);
void printlib(struct Book *lib);
void releaselib(struct Book **lib);
void printBook(struct Book book);
//函数
void getInput(struct Book *book) //輸入
{
    printf("请输入书名：");
    scanf("%s", book->title);
    printf("请输入作者:");
    scanf("%s", book->author);
}

void addBook(struct Book **lib) //修改指针的值要传指针地址进去，指向book结构体的指针的指针
{
    struct Book *book;
    static struct Book *tail; //记录单链表尾部位置,要改成静态变量，否则每次调用add函数都会被初始化
    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        exit(1);
    }

    getInput(book);
    if (*lib != NULL)
    {
        // temp = *lib;
        //  //定位单链表的尾部位置
        //  while (temp->next != NULL)
        //  {
        //      temp = temp->next;
        //  }
        //  //插入数据
        //  temp->next = book;
        //  book->next = NULL;
        tail->next = book;
        book->next = NULL;
    }
    else
    {
        *lib = book;
        book->next = NULL;
    }
    tail = book;
}
struct Book *searchBook(struct Book *lib, char *target) //搜索
{
    struct Book *book;
    book = lib;
    while (book != NULL)
    {
        if (!strcmp(book->title, target) || !strcmp(book->author, target))
        {
            break;
        }
        book = book->next;
    }
    return book;
}
void PrintBook(struct Book *book)
{
    printf("书名：%s\n", book->title);
    printf("作者：%s\n", book->author);
}
void printlib(struct Book *lib)
{

    struct Book *book;
    int cnt = 0;

    book = lib;
    while (book != NULL)
    {
        printf("Book_%d:\n", cnt);
        printf("书名:%s\n", book->title);
        printf("作者:%s\n", book->author);
        book = book->next;
        cnt++;
    }
}
void releaselib(struct Book **lib)
{
    struct Book *temp;
    while (lib != NULL)
    {
        temp = *lib;
        *lib = (*lib)->next;
        free(temp);
    }
}
int main(int argc, char const *argv[])
{
    struct Book *lib = NULL;
    struct Book *book;
    char input[128];
    int ch;
    while (1)
    {
        printf("是否继续录入书籍（Y/N）:");
        do
        {
            ch = getchar();
        } while (ch != 'Y' && ch != 'N');
        if (ch == 'Y')
        {
            addBook(&lib);
        }
        else
        {
            break;
        }
    }
    printf("是否需要打印图书信息(y/n):");
    do
    {
        ch = getchar();
    } while (ch != 'y' && ch != 'n');
    if (ch == 'y')
    {
        printlib(lib);
    }
    printf("\n请输入作者或书名:");
    scanf("%s", input);
    book = searchBook(lib, input);
    if (book == NULL)
    {
        printf("没找到\n");
    }
    else
    {
        printf("已找到符号条件的图书...\n");
        do
        {
            PrintBook(book);
        } while ((book = searchBook(book->next, input)) != NULL);
    }

    releaselib(&lib);
    return 0;
}