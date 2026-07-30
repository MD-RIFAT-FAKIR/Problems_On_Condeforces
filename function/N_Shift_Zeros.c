#include<stdio.h>

//shit right all it's zero of an array
void shifZefo(short int arr[], short int size) {
    //count non-Zero elements of the array
    short int countNonZero = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) {
            countNonZero++;
        }
    }

    //check non zero element countNonZero times
    int nextCheck = 0;

    for(int i = 0; i < size; i++) {
        //store non zero element in array until all nonZero found
        if(i < countNonZero) {
            for(int j = nextCheck; j < size; j++) {
                if(arr[j] > 0) {//when get non zero element
                    arr[i] = arr[j];//put non zero element into (i)th positon
                    nextCheck = (j+1);
                    break;
                }
            }
        }
        //after stored all non-zero put 0 for for rest indices
        else {
            arr[i] = 0;
        }
    }

    //print shited array
    for(int i = 0; i < size; i++) {
        printf("%hd ", arr[i]);
    }
    
}

int main() {
    //taking size for array
    short int size;
    scanf("%hd", &size);

    //declare an array with input size
    short int numbers[size];

    //taking input element for array
    for(int i = 0; i < size; i++) {
        scanf("%hd", &numbers[i]);
    }

    //call shift zero function
    shifZefo(numbers, size);

    return 0;
}