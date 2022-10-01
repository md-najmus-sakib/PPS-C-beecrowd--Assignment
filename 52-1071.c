#include <stdio.h>

int main()
{

    int i, a, b, min, max, sum = 0;
    scanf("%d%d", &a, &b);

    if (a>b)
    {
        min = b;
        max = a;
    }
    else{
        min = a;
        max = b;
    }
    

    for (i = (min+1); i < max; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}