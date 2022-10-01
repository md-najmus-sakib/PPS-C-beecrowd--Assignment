#include <stdio.h>

int main()
{

    int n, a, b, i, x = 0, y = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        if (a > b)
        {
            x++;
        }
        else if (b > a)
        {
            y++;
        }
    }

    if(x>=0 || y>=0){
        printf("%d %d\n", x, y);
    }

    return 0;
}