#include<stdio.h>

int main() {

    //taking the size of array
    short size;
    scanf("%hd", &size);

    //taking input elements for array
    int numbers[size];

    for(int i=0; i<size; i++) {
        scanf("%d", &numbers[i]);
    }

    //performing operation in every index
    for(int i=0; i<size; i++) {
        //positive elements replace by 1
        if(numbers[i]>0) {
            numbers[i] = 1;
        }
        //negative elements replace by 2
        else if(numbers[i]<0) {
            numbers[i] = 2;
        }
    }

    //printint the updated array
    for(int i=0; i<size; i++) {
        printf("%d ", numbers[i]);
    } 

    return 0;
}