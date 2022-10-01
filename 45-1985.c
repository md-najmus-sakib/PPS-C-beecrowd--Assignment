#include <stdio.h>

int main()
{

    int x, i, pn, pq;
    scanf("%d", &x);
    float s1, s2, s3, s4, s5, a = 1.50, b = 2.50, c = 3.50, d = 4.50, e = 5.50;
    double sum;

    for (i = 1; i <= x; i++)
    {
        scanf("%d", &pn);
        if (pn == 1001)
        {
            scanf("%d", &pq);
            s1 = a * pq;
        }
        else if (pn == 1002)
        {
            scanf("%d", &pq);
            s2 = b * pq;
        }
        else if (pn == 1003)
        {
            scanf("%d", &pq);
            s3 = c * pq;
        }
        else if (pn == 1004)
        {
            scanf("%d", &pq);
            s4 = d * pq;
        }
        else if (pn == 1005)
        {
            scanf("%d", &pq);
            s5 = e * pq;
        }
    }

    sum = s1 + s2 + s3 + s4 + s5;

    printf("%.2lf\n", sum);

    return 0;
}