#include <stdio.h>
//指针函数 使用指针变量作为函数的返回值
char *get_word(char);

char *get_word(char c)
{   
    //错误的 不要返回局部变量的指针 不要返回局部变量的指针
    char str1[]="Apple";
    char str2[]="Banana";
    char str3[]="Cat";
    char str4[]="Dog";
    char str5[]="None";
    
    switch (c)
    {
    case 'A':return str1;
    case 'B':return str2;
    case 'C':return str3;
    case 'D':return str4;
    
    
    default:return str5;
    }   
}

int main()
{
    char input;
    printf("请输入一个字母:\n");
    scanf("%c",&input);
    
    printf("%s\n",get_word(input));

    return 0;
}