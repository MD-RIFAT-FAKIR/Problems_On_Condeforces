#include<stdio.h>

int main() {

    int X;
    scanf("%d", &X);

    //if number is 0 or 1 then it is composite or No prime
    if(X<2) {
        printf("NO\n");

        return 0;
    }

    //check divisor if found any then flag increment by 1
    for(int i=2; i*i<=X; i++) {//loop will iterate till root square of X
        if(X%i == 0) {
            printf("NO\n");// if get any divisor 

            return 0;
        }
    }

    printf("YES\n");
    
    return 0;
}