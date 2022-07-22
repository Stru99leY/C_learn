#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    int mask = 0xFF;
    int v1 = 0xABCDEF;
    int v2 = 0xABCDEF;
    int v3 = 0xABCDEF;

    v1 &= mask;
    v2 |= mask;
    v3 ^= mask;
    printf("v1 = 0x%x\n", v1);
    printf("v2 = 0x%x\n", v2);
    printf("v3 = 0x%x\n", v3);
    return 0;
    */
    int value = 1;
    while (value < 1024)
    {
        value <<= 1;
        printf("value = %d\n", value);
    }
    printf("\n---------######--------\n\n");
    value=1024;
    while (value>0)
    {
        value>>=2;
        printf("value = %d\n",value);
    }
    return 0;
}
