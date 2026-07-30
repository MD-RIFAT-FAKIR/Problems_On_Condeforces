#include<stdio.h>

//shit right of array
void shiftRightArray(int array[], int size, int sumberOfShift) {

    int shiftLimit = (sumberOfShift % size); //get minimum times of iteration

    //shit right of array of sumberOfShift time
    while(shiftLimit > 0) {

        int right = 0;//store right element of array

        //shift right element
        for(int i = (size-1); i >= 0; i--) {
            //store most right element of arrray
            if( i == size-1 ) {
                right = array[size-1];
            }
            /*shift most left elemet to next index (most left+1),
             and store right element to most left */
            else if(i == 0) {
                array[i+1] = array[i]; 
                array[i] = right;
            }
            else {
                /*shift element between left to right by 1 index array[i+1]*/
                array[i+1] = array[i];
            }
        }

        shiftLimit--;
    }

    //after shifting print the array
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

}

int main() {
    //taking size for array and times of shifting the array
    short int size, numberOfShifts;
    scanf("%hd %hd", &size, &numberOfShifts);

    //declare array
    int numbers[size];

    //taking input element for array
    for(int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    //call shift array function
    shiftRightArray(numbers, size, numberOfShifts);

    return 0;
}