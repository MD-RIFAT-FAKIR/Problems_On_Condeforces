#include<stdio.h>

int main() {

    //taking the size of array
    short int size;
    scanf("%hd", &size);

    //taking input elements for each index
    int numbers[size];
    for(int i=0; i<size; i++) {
        scanf("%d", &numbers[i]);
    }

    //assumed 0th index is lowest number
    int lowest = numbers[0];
    short int position = 0; 

    //compare lowest 
    for(int i=1; i<size; i++) {
        if(numbers[i] < lowest) {
            lowest   = numbers[i];
            position = i;
        }
    }

    //printing lowest number and it's positon
    printf("%d %hd", lowest, position+1);


    return 0;
}