#include <stdio.h>

int main()
{

    int a, i, ani;
    int s = 0, s1 = 0, s2 = 0, s3 = 0;
    char ch;
    double x, y, z;
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        scanf("%d %c", &ani, &ch);
        s = s + ani;
        if ('C' == ch)
        {
            s1 = s1 + ani;
        }
        else if ('R' == ch)
        {
            s2 = s2 + ani;
        }
        else if ('S' == ch)
        {
            s3 = s3 + ani;
        }
    }

    x = (s1/(s*1.0))*100;
    y = (s2/(s*1.0))*100;
    z = (s3/(s*1.0))*100;

    printf("Total: %d cobaias\n", s);
    printf("Total de coelhos: %d\n", s1);
    printf("Total de ratos: %d\n", s2);
    printf("Total de sapos: %d\n", s3);
    printf("Percentual de coelhos: %.2lf %%\n", x);
    printf("Percentual de ratos: %.2lf %%\n", y);
    printf("Percentual de sapos: %.2lf %%\n", z);

    return 0;
}