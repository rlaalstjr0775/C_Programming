#include <stdio.h>

int main()
{
    int n, i;
    double term = 1.0;
    double e = 1.0;
    double factorial = 1.0;

    printf("Enter the number of terms to use in the estimation of e: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        term = 1.0 / factorial;
        e = e + term;
    }

    printf("Estimation of e: %lf\n", e);
    printf("Terms count: %d\n", n);

    return 0;
}