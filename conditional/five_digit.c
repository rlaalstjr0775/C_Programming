#include <stdio.h>

int main()
{
    // Variables Declaration
    int digit, n1, n2, n3, n4, n5;

    // Input
    printf("Enter 5 digit number: ");
    scanf("%d", &digit);

    // Calculation
    n1 = (digit / 10000) % 10;
    n2 = (digit / 1000) % 10;
    n3 = (digit / 100) % 10;
    n4 = (digit / 10) % 10;
    n5 = digit % 10;

    // Output
    printf("%d   %d   %d   %d   %d\n", n1, n2, n3, n4, n5);
    return 0;
}