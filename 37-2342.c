#include<stdio.h>

int main (){

    int a,b,x;
    char ch;
    scanf("%d", &x);
    scanf("%d%c%d", &a, &ch, &b);

    if(ch == '+'){
        if(a + b <= x){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    else{
        if(a * b <= x){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }

    return 0;
}





// #include <stdio.h>

// int main(){	
// 	int lim, x, y;
// 	char p;
	
// 	scanf("%d", &lim);
// 	scanf("%d %c %d", &x, &p, &y);
	
// 	if(p == '+')
// 		if(x + y <= lim)
// 			printf("OK\n");
// 		else
// 			printf("OVERFLOW\n");
// 	else
// 		if(x * y <= lim)
// 			printf("OK\n");
// 		else
// 			printf("OVERFLOW\n");
	
// 	return 0;
// }