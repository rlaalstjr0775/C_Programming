#include <stdio.h>

int main()
{
    int num, digit, count = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Negative number is not allowed\n");
    }
    else
    {
        while (num > 0)
        {
            digit = num % 10;
            if (digit == 9)
            {
                count++;
            }
            num = num / 10;
        }
        printf("There are %d of number 9.\n", count);
    }
    return 0;
}