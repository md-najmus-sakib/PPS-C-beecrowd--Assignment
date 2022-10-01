#include <stdio.h>

int main()
{
    int T, hour, min, sec2, sec;
    scanf("%d", &T);
    hour = (T / 3600);
    sec2 = (T - (3600 * hour));
    min = (sec2 / 60);
    sec = (sec2 - (60 * min));
    printf("%d:%d:%d", hour, min, sec);

    return 0;
}