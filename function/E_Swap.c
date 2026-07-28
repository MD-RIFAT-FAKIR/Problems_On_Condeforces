#include<stdio.h>

//swap to number 
void swapNumber(int x, int y) {//swap to number not using third variable
    x = x + y;
    y = x - y;
    x = x - y;

    printf("%d %d", x, y);
}

int main(){
    int firstNumber, secondNumber;
    scanf("%d %d", &firstNumber, &secondNumber);

    swapNumber(firstNumber, secondNumber);//call swapNumber()

    return 0;
}