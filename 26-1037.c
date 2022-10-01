#include <stdio.h>

int main()
{

    float A;
    scanf("%f", &A);
    if (A >= 0 && A <= 25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (A > 25 && A <= 50)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (A > 50 && A <= 100)
    {
        printf("Intervalo (75,100]\n");
    }
    else if (A < 0 || A > 100)
    {
        printf("Fora de intervalo");
    }

    return 0;
}