#include<stdio.h>

int main() {

    //number of test case
    short int numberOftestCase;
    scanf("%hd", &numberOftestCase);

    //loop will iterate according to number of test case
    for(int i=0; i<numberOftestCase; i++) {

        // taking number of element 
        short int size;
        scanf("%hd", &size);

        //declare array
        int numbers[size];
        
        //taking input element for array
        for(int i = 0; i < size; i++) {
            scanf("%d", &numbers[i]);
        }

        //extract array into sub-array
        for(int start = 0; start < size; start++) {//starting index of sub-array

            int maximum = numbers[start];//assumed start index is maximum

            for(int end = start; end < size; end++) {//ending index of sub-array
                
                for(int i = start; i<=end; i++) {//traversing start to end for each subarray

                    //finding maximum of every sub-array
                    if(maximum < numbers[i]) {
                        maximum    = numbers[i];
                    }
                }
                printf("%d ", maximum);
            }
        }
        printf("\n");
    }

    return 0;
}