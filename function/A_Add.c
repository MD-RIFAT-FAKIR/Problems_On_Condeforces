#include<stdio.h>

int sum(int a, int b) {//funcion definition
    return a + b;
}

int main() {
    //taking input nubers
    short int firstNumber, secondNumber;
    scanf("%hd %hd", &firstNumber, &secondNumber);

    int result = sum(firstNumber, secondNumber);//call function

    printf("%d", result);

    return 0;
}