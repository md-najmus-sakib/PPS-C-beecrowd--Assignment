#include<stdio.h>
#include<math.h>

int main () {

    float a,b;
    double c,d;
    scanf("%f%f", &a,&b);
    scanf("%lf%lf", &c,&d);
    printf("A = %.6f, B = %.6f\n", a,b);
    printf("C = %.6lf, D = %.6lf\n", c,d);
    printf("A = %.1f, B = %.1f\n", a,b);
    printf("C = %.1lf, D = %.1lf\n", c,d);
    printf("A = %.2f, B = %.2f\n", a,b);
    printf("A = %.2lf, B = %.2lf\n", c,d);
    printf("A = %.3f, B = %.3f\n", a,b);
    printf("C = %.3lf, D = %.3lf\n", c,d);
    printf("A = %.3E, B = %.3E\n", a,b);
    printf("C = %.3E, D = %.3E\n", c,d);
    printf("A = %.0f, B = %.0f\n", a,b);
    printf("C = %.0lf, D = %.0lf\n", c,d);


    // float a, b;
    // double c, d;
    // scanf("%f %f %lf %lf",&a, &b, &c, &d);
    // printf("A = %.6lf, B = %.6lf\nC = %.6lf, D = %.6lf\n",a,b,c,d);
    // printf("A = %.1lf, B = %.1lf\nC = %.1lf, D = %.1lf\n",a,b,c,d);
    // printf("A = %.2lf, B = %.2lf\nC = %.2lf, D = %.2lf\n",a,b,c,d);
    // printf("A = %.3lf, B = %.3lf\nC = %.3lf, D = %.3lf\n",a,b,c,d);
    // printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n",a,b,c,d);
    // printf("A = %.0f, B = %.0f\nC = %.0f, D = %.0f\n",a,b,c,d);

    return 0;
}