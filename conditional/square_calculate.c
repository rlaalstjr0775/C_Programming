#include <stdio.h>

int main()
{
    // Variables Declaration
    double sideOfSquare, areaOfSquare, perimeterOfSquare;

    // Input
    printf("Enter the side of square: ");
    scanf("%lf", &sideOfSquare);

    // Calculation
    areaOfSquare = sideOfSquare * sideOfSquare;
    perimeterOfSquare = sideOfSquare * 4;

    // Output
    printf("Area: %lf\n", areaOfSquare);
    printf("Perimeter: %lf\n", perimeterOfSquare);

    return 0;
}