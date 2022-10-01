#include <stdio.h>

int main()
{

    int n1, n2, i, max, min, j, s = 0;

    for (i = 1; i <= 1000; i++)
    {
        scanf("%d%d", &n1, &n2);
        if (n1 <= 0 || n2 <= 0)
        {
            break;
        }
        if (n1 > n2)
        {
            max = n1;
            min = n2;
        }
        else
        {
            max = n2;
            min = n1;
        }
        for (j = min; j <= max; j++)
        {
            printf("%d ", j);
            s = s + j;
        }
        printf("Sum=%d\n", s);
        s = 0;
    }

    return 0;
}