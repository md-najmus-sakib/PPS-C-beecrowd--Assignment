#include<stdio.h>

int main (){

    int x,i;
    scanf("%d", &x);

    for(i=1; i<=x; i++){
        if(x==0){
            break;
        }
        else{
            printf("%d ", i);
        }
    }

    return 0;
}