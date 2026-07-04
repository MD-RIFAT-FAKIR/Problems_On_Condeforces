#include<stdio.h>

int main() {

    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int sumation = 0;

    for(int i=1; i<=n; i++) {
        //check the sum of digit
        int sumOfDigit = 0;
        int num        = i;
        int digit;

        while(num>=1) {
            digit         = num%10;
            sumOfDigit   += digit;
            num           = num/10;
        }

        //check if the sumOfDigit between (a and b) inclusive
        if(sumOfDigit>=a && sumOfDigit<=b) {
            sumation += i;
        }
    }

    printf("%d",sumation);

    return 0;
}