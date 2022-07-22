#include <stdio.h>
#include <time.h>

/*
int main(void)
{
    enum Week
    {
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat,
        Sun
    };
    enum Week today;
    struct tm *p;
    time_t t;
    time(&t);
    p = localtime(&t);
    today = p->tm_wday;
    switch (today)
    {
        {
        case Mon:
        case Tue:
        case Wed:
        case Thu:
        case Fri:
            printf("Work!\n");
            break;
        case Sat:
        case Sun:
            printf("Weekend!\n");

        default:
            printf("Error!\n");
            break;
        }
    }
        return 0;
}
*/

int main(int argc, char const *argv[])
{
    enum Color{red,green,blue};
    enum Color rgb;
    for(rgb=red;rgb<=blue;rgb++)
    {
        printf("rgb is %d\n",rgb);//初始化为0，所以输出为0，1，2
    }
    return 0;
}
