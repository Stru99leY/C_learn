#include <stdio.h>
#include <stdlib.h>

typedef struct Date
{
    int year;
    int month;
    int day;
} DATE,*PDATE;

int main(int argc, char const *argv[])
{
    struct Date *date;
    date = (PDATE)malloc(sizeof(DATE));
    if (date == NULL)
    {
        printf("内存分配失败");
        exit(1);
    }
    date->year = 2018;
    date->month = 12;
    date->day = 30;
    
    printf("%d-%d-%d\n", date->year, date->month, date->day);
    free(date);

    return 0;
}

