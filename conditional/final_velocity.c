#include <stdio.h>

int main()
{
    // Variables Declaration
    float u, a, t, v, s;

    // Input
    printf("Enter initial velocity: ");
    scanf("%f", &u);
    printf("Enter initial acceleration: ");
    scanf("%f", &a);

    // Calculation
    v = u + a * t;
    s = u * t + (a * t * t) / 2;

    // Output
    printf("Final velocity: %f", v);
    printf("Distance traveled: %f", s);

    return 0;
}