#include<stdio.h>

int main() {

    //size of the array
    short int size;
    scanf("%hd", &size);

    //size must be grater or equal 2
    if(size<2) {
        printf("Size must be grater or equal 2\n");
        scanf("%hd", &size);
    }

    //declaring array of size
    int numbers[size];

    //taking input elements for array
    for(int i=0; i<size; i++) {
        scanf("%d", &numbers[i]);
    }

    //eheck the minimum element
    int minimum = numbers[0];// assumed first element is the minimum
    for(int i=1; i<size; i++) {
        if(minimum > numbers[i]) {
            minimum = numbers[i];
        }
    }

    //count how many time minimum exist into array
    short int countMinimun = 0;
    for(int i=0; i<size; i++) {
        if(numbers[i] == minimum) {
            countMinimun += 1;
        }
    }

    //if the frequency of minimum is odd then it is lucky otherwise not
    if(countMinimun%2 != 0) {
        printf("Lucky");
    }else {
        printf("Unlucky");
    }

    return 0;
}