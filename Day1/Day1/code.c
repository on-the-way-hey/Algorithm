#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>a.out.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%dx%d=%-4d ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}