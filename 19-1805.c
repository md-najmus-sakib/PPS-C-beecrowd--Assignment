// #include <stdio.h>

// int main()
// {

//     long long int a, b, n, S;
//     scanf("%lld%lld", &a, &b);
//     n = ((b - a) + 1);
//     S = (((float)n / 2) * ((2 * a) + (n - 1)));
//     printf("%lld", S);

//     return 0;
// }


#include <stdio.h>
int main()
{
    long long int a, b, s;
    scanf("%lld %lld", &a, &b);
    s = ((a + b) * (b - a + 1)) / 2;
    printf("%lld\n", s);

    return 0;
}