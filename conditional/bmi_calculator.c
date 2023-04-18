#include <stdio.h>

int main()
{
    // Variables Declaration
    float bmi, weightInKilo, heightInMeter;

    // Input
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weightInKilo);
    printf("Enter your height in meters: ");
    scanf("%f", &heightInMeter);

    // Calculation
    bmi = weightInKilo / (heightInMeter * heightInMeter);

    // Output
    if (bmi < 18.5)
    {
        printf("BMI: %f\n", bmi);
        printf("Status: Underweight\n");
    }
    else if (bmi < 24.9)
    {
        printf("BMI: %f\n", bmi);
        printf("Status: Normal\n");
    }
    else if (bmi < 29.9)
    {
        printf("BMI: %f\n", bmi);
        printf("Status: Overweight\n");
    }
    else
    {
        printf("BMI: %f\n", bmi);
        printf("Status: Obese\n");
    }

    return 0;
}