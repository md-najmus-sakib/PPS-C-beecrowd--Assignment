#include <stdio.h>

int main()
{

    int i, a, n[46];
    scanf("%d", &a);

    n[0] = 0;
    n[1] = 1;

    for (i = 2; i < a; i++)
    {
        n[i] = n[i - 1] + n[i - 2];
    }

    printf("0");
    for (i = 1; i < a; i++)
    {
        printf(" %d", n[i]);
    }
    printf("\n");

    return 0;
}