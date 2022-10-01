#include <stdio.h>

int main()
{

    int i, j, a, b = 7;

    for (i = 1; i <= 9; i=i+2)
    {
        for (a = 1, j = b; a <= 3; a++,j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
        b = b + 2;
    }

    return 0;
}