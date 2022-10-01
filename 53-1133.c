#include <stdio.h>

int main()
{

    int x, y, i, n1, n2;
    scanf("%d%d", &x, &y);

    if (x < y)
    {
        n1 = x;
        n2 = y;
    }
    else
    {
        n1 = y;
        n2 = x;
    }

    n1++;

    for (i = n1; i < n2; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}