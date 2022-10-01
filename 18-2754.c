#include <stdio.h>

int main()
{

    double a = 234.345, b = 45.698;

    printf("%.6lf - %.6lf\n", a, b);
    printf("%.0lf - %.0lf\n", a, b);
    printf("%.1lf - %.1lf\n", a, b);
    printf("%.2lf - %.2lf\n", a, b);
    printf("%.3lf - %.3lf\n", a, b);
    printf("%e - %e\n", a, b);
    printf("%E - %E\n", a, b);
    printf("%g - %g\n", a, b);
    printf("%g - %g\n", a, b);

    // printf("234.345000 - 45.698000\n");
    // printf("234 - 46\n");
    // printf("234.3 - 45.7\n");
    // printf("234.34 - 45.70\n");
    // printf("234.345 - 45.698\n");
    // printf("2.343450e+02 - 4.569800e+01\n");
    // printf("2.343450E+02 - 4.569800E+01\n");
    // printf("234.345 - 45.698\n");
    // printf("234.345 - 45.698\n");

    return 0;
}