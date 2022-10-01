#include <stdio.h>

int main()
{

    int i;
    long long int x, y;

    for (i = 1; i <= 100; i++)
    {
        scanf("%lld%lld", &x, &y);
        if (x == 0 && y == 0)
        {
            break;
        }
        else
        {
            printf("%lld\n", x*y);
        }
    }

    return 0;
}