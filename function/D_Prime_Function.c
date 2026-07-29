#include<stdio.h>

//check if a number is prime or not
void checkPrime(int number) {

    if(number == 1) {//for number 1
        printf("NO\n");
    }
    else if(number <= 3) {//for number 2 and 3
        printf("YES\n");
    }
    else {
        //check not prime
        short int isPrime = 1;

        for(int i = 2; (i*i) <= number; i++) {
            if(number % i == 0) {//check if number has any divisor
                isPrime = 0;
            }
        }
        printf(isPrime ? "YES\n" : "NO\n");
    }

}

int main() {
    //taking number of test case
    short int numberOFTastCase;
    scanf("%hd", &numberOFTastCase);

    while(numberOFTastCase > 0) {
        //taking number
        int number;
        scanf("%d", &number);

        checkPrime(number);//call checkPrim()

        numberOFTastCase--;
    }

    return 0;
}