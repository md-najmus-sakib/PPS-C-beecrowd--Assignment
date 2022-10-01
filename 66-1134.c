#include <stdio.h>

int main()
{

    int a, i, x = 0, y = 0, z = 0;
    printf("MUITO OBRIGADO\n");

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &a);
        if (a >= 1 && a <= 3)
        {
            if (a == 1)
            {
                x++;
            }
            else if (a == 2)
            {
                y++;
            }
            else if (a == 3)
            {
                z++;
            }
        }
        else if (a == 4)
        {
            break;
        }
    }

    printf("Alcool: %d\n", x);
    printf("Gasolina: %d\n", y);
    printf("Diesel: %d\n", z);

    return 0;
}