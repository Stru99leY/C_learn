#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char title[128];
    char author[40];
    struct Book *next;
};

void getInput(struct Book *book);
void addBook(struct Book **lib);
void printlib(struct Book *lib);
void releaselib(struct Book **lib);


void getInput(struct Book *book)
{
    printf("请输入书名：");
    scanf("%s", book->title);
    printf("请输入作者:");
    scanf("%s", book->author);
}

void addBook(struct Book **lib)//修改指针的值要传指针地址进去，指向book结构体的指针的指针
{
    struct Book *book,*temp;
    book=(struct Book *)malloc(sizeof(struct Book));
    if (book==NULL)
    {
        exit(1);
    }

    getInput(book);
    if(*lib!=NULL){
        temp=*lib;
        *lib=book;
        book->next=temp;
    }
    else{
        *lib=book;
        book->next=NULL;
    }
    
}

void printlib(struct Book *lib)
{

    struct Book *book;
    int cnt =0;

    book=lib;
    while (book!=NULL)
    {
        printf("Book_%d:\n",cnt);
        printf("书名：%s\n",book->title);
        printf("作者:%s\n",book->author);
        book=book->next;
        cnt++;
    }
    
}
void releaselib(struct Book **lib)
{
        struct Book *temp;
    while (lib!=NULL)
    {
        temp=*lib;
        *lib=(*lib)->next;
        free(temp);
    }
    
}
int main(int argc, char const *argv[])
{
    struct Book *lib=NULL;
    char ch;
    while (1)
    {
        printf("是否继续录入书籍（Y/N）:");
        do
        {
            ch=getchar();
        } while (ch!='Y'&&ch!='N');
        if (ch=='Y')
        {
            addBook(&lib);
        }else
        {
            break;
        }
        
        
    }
    printf("是否需要打印图书信息(y/n):");
    do
        {
            ch=getchar();
        } while (ch!='y'&&ch!='n');
    if (ch=='y')
    {
        printlib(lib);
    }
    releaselib(&lib);
    
    
    return 0;
}

