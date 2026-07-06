#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n>=1) {

        int number;
        scanf("%d", &number);

        //conver the number of (1s) in the binary representation
        int countOnes = 0;

        while(number>0) {

            if(number%2 == 1) {
                countOnes += 1;
                number /= 2;
            }else{
                number /= 2;
            }

        }

        //createing a binary number only containing countOnes number of 1s
        int decimal = 0;
        
        for(int i=1; i<=countOnes; i++) {

            decimal = (decimal*2) + 1; /*appending the decimal value of binary
                                        positon and add to current value*/

        }

        printf("%d\n", decimal);

        n--;
    }
    

    return 0;
}