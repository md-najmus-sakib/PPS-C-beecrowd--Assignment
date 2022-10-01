#include <stdio.h>

int main()
{

    int i, x, n[5];

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }

    x = n[0];

    if (n[0] == x)
    {
        if (n[1] == x + 1)
        {
            if (n[2] == x + 2)
            {
                if (n[3] == x + 3)
                {
                    if (n[4] == x + 4)
                    {
                        printf("C\n");
                    }
                    else
                    {
                        printf("N\n");
                    }
                }
                else
                {
                    printf("N\n");
                }
            }
            else
            {
                printf("N\n");
            }
        }
        else if (n[1] == x - 1)
        {
            if (n[2] == x - 2)
            {
                if (n[3] == x - 3)
                {
                    if (n[4] == x - 4)
                    {
                        printf("D\n");
                    }
                    else
                    {
                        printf("N\n");
                    }
                }
                else
                {
                    printf("N\n");
                }
            }
            else
            {
                printf("N\n");
            }
        }
    }

    return 0;
}