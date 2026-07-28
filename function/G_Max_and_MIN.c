#include<stdio.h>

//check min and max element in an array
void findMinMax(int numbers[], short int size){

    //finding min element 
    int minIndex = 0;//assumed first element as min
    for(int i = 1; i < size; i++) {
        if(numbers[i] < numbers[minIndex]) {
            minIndex = i;
        }
    }
    printf("%d ", numbers[minIndex]);

    //finding max element 
    int maxIndex = 0;//assumed first element as max
    for(int i = 1; i < size; i++) {
        if(numbers[i] > numbers[maxIndex]) {
            maxIndex = i;
        }
    }
    printf("%d", numbers[maxIndex]);

}



int main() {
    //taking size for number array
    short int size;
    scanf("%hd", &size);

    //declareing array
    int numbers[size];

    //taking input element for numbers array
    for(int i = 0; i < size; i++) {
        scanf("%d",&numbers[i]);
    }

    findMinMax(numbers, size);//call findmax function

    return 0;
}