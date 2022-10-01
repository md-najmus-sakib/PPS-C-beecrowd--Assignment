#include <stdio.h>

int main (){

    int x,y;
    float price;
    scanf ("%d%d", &x, &y);
    if (x==1){
        price = 4.00*y;
    }
    else if (x==2){
        price = 4.50*y;
    }
    else if (x==3){
        price = 5.00*y;
    }
    else if (x==4){
        price = 2.00*y;
    }
    else if (x==5){
        price = 1.50*y;
    }
    printf("Total: R$ %.2f\n", price);

    return 0;
}

























// #include<stdio.h>
// int main()
// {
//     int X, Y;
//     float price = 0;

//     scanf("%d %d", &X, &Y);
//     if (X == 1)
//     {
//         price  = (float) (4.00 * Y);
//     }
//     else if (X == 2)
//     {
//         price  = (float) (4.50 * Y);
//     }
//     else if (X == 3)
//     {
//         price  = (float) (5.00 * Y);
//     }
//     else if (X == 4)
//     {
//         price  = (float) (2.00 * Y);
//     }
//     else if (X == 5)
//     {
//         price  = (float) (1.50 * Y);
//     }

//     printf("Total: R$ %.2fn",price);

// }