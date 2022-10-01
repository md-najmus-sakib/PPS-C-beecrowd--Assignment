// #include <stdio.h>

// int main()
// {
//     int a;
//     float x, decimal;
//     scanf("%f", &x);
//     a = x;
//     decimal = x - a;
//     decimal = decimal * 1000;
//     printf("%.f.%d\n", decimal, a);

//     return 0;
// }

#include<stdio.h>

int main(){

    int a, b;
    scanf("%d.%d", &a,&b);
    printf("%d.%d\n", b,a);

    return 0;
}