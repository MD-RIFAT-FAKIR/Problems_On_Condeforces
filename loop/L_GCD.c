#include<stdio.h>

int main() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int iterations = 0;

    if(num1>num2) {
        iterations = num2;
    }else{
        iterations = num1;
    }

    int gcd = 0;
    for(int i=1; i<=iterations; i++) {
        if(num1%i==0 && num2%i==0) {
            gcd = i;
        }
    }

    printf("%d", gcd);

    return 0;
}