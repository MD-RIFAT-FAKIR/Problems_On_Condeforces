#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int firstNum  = 0;
    int secondNum = 1;
    int newNum    = 0;

    if(n>=1) {
        printf("%d ", firstNum);
    }
    if(n>=2) {
        printf("%d ", secondNum);
    }

    for(int i=2; i<n; i++) {
        newNum = firstNum + secondNum;
        printf("%d ", newNum);
        firstNum  = secondNum;
        secondNum = newNum;
    }

    return 0;
}