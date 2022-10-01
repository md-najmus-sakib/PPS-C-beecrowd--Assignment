#include <stdio.h>

int main()
{

    int i, j, n, k, d;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &k);

        for (j = 0; j < k; j++)
        {
            scanf("%d", &d);
            if (d == 1)
            {
                printf("Rolien\n");
            }
            else if (d == 2)
            {
                printf("Naej\n");
            }
            else if (d == 3)
            {
                printf("Elehcim\n");
            }
            else
            {
                printf("Odranoel\n");
            }
        }
    }

    return 0;
}