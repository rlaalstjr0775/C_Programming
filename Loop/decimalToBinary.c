#include <stdio.h>

int main()
{
    int binaryNum, decimalNum, sum = 0, i = 1;

    printf("Enter decimal number: ");
    scanf("%d", &decimalNum);

    while (decimalNum != 0)
    {
        binaryNum = decimalNum % 2;
        decimalNum = decimalNum / 2;
        sum = sum + binaryNum * i;
        i = i * 10;
    }

    printf("Binary nunber: %d\n", sum);

    return 0;
}