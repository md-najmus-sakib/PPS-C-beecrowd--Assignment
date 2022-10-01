#include <stdio.h>

int main()
{

    int a, b, i, max, min, s = 0;
    scanf("%d%d", &a, &b);

    if (b > a)
    {
        max = b;
        min = a;
    }
    else
    {
        max = a;
        min = b;
    }

    i = min;

    while (i <= max)
    {
        if (i % 13 != 0)
        {
            s = s + i;
        }
        i++;
    }

    printf("%d\n", s);

    return 0;
}