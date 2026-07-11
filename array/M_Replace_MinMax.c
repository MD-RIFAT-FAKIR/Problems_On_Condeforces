#include<stdio.h>

int main() {

    //number of element
    short int size;
    scanf("%hd", &size);

    //declareing array
    int numbers[size];

    //taking input element for array
    for(int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int minIndex = 0;
    int maxIndex = 0;
    int minimum  = numbers[0];
    int maximum  = numbers[0];
    
    //finding minimum and maximum element's index
    for(int j = 1; j < size; j++) {//compare minimum with other index

        if(minimum > numbers[j]) {
            minIndex = j;//updating minimum index
            minimum  = numbers[j];//updating minimum element
        }
        else if (maximum < numbers[j]) {
            maxIndex = j;//updating maximul index
            maximum  = numbers[j];//updating maximul element
        }
    }

    //swaping minimum with maximum
    int temp          = numbers[maxIndex];
    numbers[maxIndex] = numbers[minIndex];
    numbers[minIndex] = temp;

    //printing new array after swaping
    for(int j = 0; j < size; j++) {
        printf("%d ", numbers[j]);
    }

    return 0;
}