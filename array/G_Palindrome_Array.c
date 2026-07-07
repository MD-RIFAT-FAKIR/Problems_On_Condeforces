#include<stdio.h>

int main() {

    //taking size of the array
    int size;
    scanf("%d", &size);

    //taking elements for every index
    int numbers[size];
    for(int i=0; i<size; i++) {
        scanf("%d", &numbers[i]);
    }

    /*compare first index with last index,
    then 2nd first index with 2nd last index and so one.. */
    short int isPalindrome = 0;

    for(int i=0; i<size/2; i++) {
        if(numbers[i] == numbers[size-1-i]) {
            isPalindrome = 1;
        }else{
            isPalindrome = 0;
            break;
        }

    }

    if(isPalindrome) {
        printf("YES");

        return 0;
    }
    
    printf("NO");

    return 0;
}