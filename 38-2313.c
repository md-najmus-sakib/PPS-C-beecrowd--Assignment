// #include <stdio.h>

// int main()
// {

//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);

//     if (a + b > c && a + c > b && b + c > a)
//     {
//         if (a == b && b == c && a == c)
//         {
//             printf("Valido-Equilatero\n");
//         }
//         else if (a != b && a != c && b != c)
//         {
//             printf("Valido-Escaleno\n");
//         }
//         else if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
//         {
//             printf("Valido-Isoceles\n");
//         }
//         if ((c * c) == (a * a) + (b * b))
//         {
//             printf("Retangulo: S\n");
//         }
//         else
//         {
//             printf("Retangulo: N\n");
//         }
//     }
//     else
//     {
//         printf("Invalido\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);

    if (((b - c) < a && b + c > a) && ((a - c) < b && a + c > b) && ((b - a) < c && b + a > c))
    {
        if (a == b && b == c)
        {
            printf("Valido-Equilatero\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Valido-Isoceles\n");
        }
        else
        {
            printf("Valido-Escaleno\n");
        }
        if (((a * a) == (b * b) + (c * c)) || ((b * b) == (a * a) + (c * c)) || ((c * c) == (b * b) + (a * a)))
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    else
    {
        printf("Invalido\n");
    }

    return 0;
}