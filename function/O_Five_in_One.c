#include<stdio.h>

//count maximum number of divisor for each element
void checkMaximumDivisor(short int arr[], short int size) {

    short int prevCountDivisor = 0, position;

    //select element 
    for(int i = 0; i < size; i++) {
        short int element = arr[i];//copy of element

        //check divisor
        short int countDivisor = 0;

        for(int j = 1; j <= element; j++) {
            if(element % j == 0) {
                countDivisor++;
            }
        }

        //save count divisor for compare with next element
        if(i == 0) {
            prevCountDivisor = countDivisor;
            position = i;
        }

        //compare count of divisor with previous element
        if(countDivisor > prevCountDivisor) {
            prevCountDivisor = countDivisor;//update prevoious count divisor
            position = i;
        }
        else if(countDivisor == prevCountDivisor) {
            if(arr[i] > arr[position]) {
                position = i;
            }
        }
        
    }

    printf("The number that has the maximum number of divisors : %hd\n", arr[position]);

}


//chck if an element of array is palindrome or not
void countPalindrome(short int arr[], short int size) {

    short int countPalndrm = 0;

    for(int i = 0; i < size; i++) {

        short int number = arr[i];//copy element
        short int result = 0;

        //check palindrome or not
        while(number > 0) {
            short int remainder = number % 10;//get last digit
            result = (result*10) + remainder;//put last digit in result
            number /= 10;
        }
        if(result == arr[i]) {
            countPalndrm++;
        }
    }

    printf("The number of palindrome numbers : %hd\n", countPalndrm);

}



//count prime number from an array
void countPrime(short int arr[], short int size) {
    short int countPrime = 0;

    //check prime number or not
    for(int i = 0; i < size; i++) {
       short int element = arr[i];//copy of element

        if(element > 1 && element <= 3) {//for 2 and 3
            countPrime++;
        }
        else if(element > 1) {
            short int isPrime = 1;//assumed element is prime
            //check not a prime
            for(int j = 2; j*j <= element; j++) {
                if(element % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime) {//if prime count increase by 1
                countPrime++;
            }
        }
    }

    printf("The number of prime numbers : %hd\n", countPrime);

}



//find minimum element from array
void findMinimum(short int arr[], short int size) {
    short int minElement = arr[0];//assumed first element as min

    for(int i = 0; i < size; i++) {
        if(arr[i] < minElement) {
            minElement = arr[i];//update minElement
        }
    }

    printf("The minimum number : %hd\n", minElement);
}


//find maximum element from array
void findMaximum(short int arr[], short int size) {
    short int maxElement = arr[0];//assumed first element as max

    for(int i = 1; i < size; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];//update maxElement
        }
    }

    printf("The maximum number : %hd\n", maxElement);
}


int main() {
    //taking size of array
    short int size;
    scanf("%hd", &size);

    //declareing array
    short int numbers[size];

    //takin input element for array
    for(int i = 0 ; i < size; i++) {
        scanf("%hd",&numbers[i]);
    }

    
    findMaximum(numbers, size);//call findMaxumum function

    findMinimum(numbers, size);//call findMinimum function

    countPrime(numbers, size);//call count prime number function

    countPalindrome(numbers, size);//call checkPalindrome function

    checkMaximumDivisor(numbers, size);//call

    return 0;
}