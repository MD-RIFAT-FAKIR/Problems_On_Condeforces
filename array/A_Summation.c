#include<stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int numbers[size];

    //putting elements to numbers array
    for(int i=0; i<size; i++) {
        scanf("%d", &numbers[i]);
    }

    long long int sumationOfNumbers = 0;

    //adding sumbers to calculate sum
    for(int i=0; i<size; i++) {
        sumationOfNumbers += numbers[i];
    }

    //if number is negative then make it positive by adding - 0
    if(sumationOfNumbers<0) {
        sumationOfNumbers = - sumationOfNumbers;
        printf("%lld", sumationOfNumbers);

        return 0;
    }

    printf("%lld", sumationOfNumbers);

    return 0;
}