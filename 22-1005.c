#include <stdio.h>

int main()
{

    float A, B, ava;
    scanf("%f%f", &A, &B);
    ava = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);
    printf("MEDIA = %.5f\n", ava);

    return 0;
}