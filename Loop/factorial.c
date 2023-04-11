#include <stdio.h>

int main()
{
    int num, i, result = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = num; i > 0; i--)
    {
        result = result * i;
    }
    printf("%d! = %d\n", num, result);
}