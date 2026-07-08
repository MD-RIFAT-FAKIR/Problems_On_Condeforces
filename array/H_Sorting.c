#include<stdio.h>

int main() {

    //taking the size of array
    short int size;
    scanf("%hd", &size);

    //taking input elements for array
    short int numbers[size];
    for(int i=0; i<size; i++) {
        scanf("%hd", &numbers[i]);
    }

    //compare index to find lowest
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            //swaping element in assending order
            if(numbers[i] > numbers[j]) {
                short int temp;
                temp       = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;

            }
        }
    }

    //print the updated array after arraging in assendign order
    for(int i=0; i<size; i++) {
        printf("%hd ", numbers[i]);
    }

    return 0;
}