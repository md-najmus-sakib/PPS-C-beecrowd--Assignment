#include <stdio.h>

int main()
{

    float A, B, C, X, Y;
    scanf("%f%f%f", &A, &B, &C);
    X = A + B + C;
    Y = (0.5 * (A + B) * C);
    if ((A + B) > C && (A + C) > B && (B + C) > A)
    {
        printf("Perimetro = %.1f", X);
    }
    else
    {
        printf("Area = %.1f", Y);
    }

    return 0;
}