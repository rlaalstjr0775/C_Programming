#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 4; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i < 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= -2 * i + 9; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}