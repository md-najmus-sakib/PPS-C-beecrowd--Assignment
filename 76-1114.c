#include <stdio.h>

int main()
{

    int a, i, x = 2002;

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &a);
        if (x == a)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else if (x != a)
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}