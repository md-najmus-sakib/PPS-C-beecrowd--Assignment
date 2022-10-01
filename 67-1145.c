#include <stdio.h>

int main()
{

    int a, b, i, j = 0;
    scanf("%d%d", &a, &b);

    for (i = 1; i <= b; i++)
    {
        printf("%d", i);
        j++;
        if (j == a)
        {
            printf("\n");
            j = 0;
        }
        else
        {
            printf(" ");
        }
    }

    return 0;
}