#include <stdio.h>

int main()
{

    int i, a = 0, b, n[100];

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &n[i]);
    }

    for (i = 1; i <= 100; i++)
    {
        if (n[i] > a)
        {
            a = n[i];
            b = i;
        }
    }

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}