#include <stdio.h>
#include <math.h>

int main()
{

    float x1, y1, x2, y2, hs, result;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    hs = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    result = sqrt(hs);
    printf("%.4f", result);

    return 0;
}