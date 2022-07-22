#include <stdio.h>
/*
#define SHOWLIST(...) printf(# __VA_ARGS__)//# 把后面的变成字符串，__VA_ARGS__ 传进去的所有实参

int main(int argc, char const *argv[])
{
    SHOWLIST(yhx,520,1314\n);
    return 0;
}
*/
#define PRINT(format, ...) printf(# format, ##__VA_ARGS__)
int main(int argc, char const *argv[])
{
    PRINT(num = % d\n, 520);
    PRINT(Hello World !\n);
    return 0;
}
