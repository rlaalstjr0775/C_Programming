#include <stdio.h>

int main()
{
    // Variables Declaration
    double x, z;
    double a = 25.5, b = 10;

    // Input
    printf("Enter x: ");
    scanf("%lf", &x);

    // Calculation
    if (x > 0 && x <= 1)
        z = (a * x * x + b * x * x * x) / 3;
    else
        z = a * x * x * x;
    // Output
    printf("z =  %lf\n", z);

    return 0;
}