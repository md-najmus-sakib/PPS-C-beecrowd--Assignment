#include <stdio.h>

int main()
{

    int i, a;
    scanf("%d", &a);

    int n[a];

    for (i = 0; i < a; i++)
    {
        scanf("%d", &n[i]);
    }

    int x = 0, min = n[0];

    for (i = 0; i < a; i++)
    {
        if (min > n[i])
        {
            min = n[i];
            x = i;
        }
    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", x);

    return 0;
}