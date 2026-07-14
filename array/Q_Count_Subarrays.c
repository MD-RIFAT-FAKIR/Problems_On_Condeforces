#include<stdio.h>

int main() {

    short int numberOfTestCase;
    scanf("%hd", &numberOfTestCase);

    int n = 0;
    while(n < numberOfTestCase) {

        //size of array
        short int size;
        scanf("%hd", &size);

        //declareing array
        int numbers[size];

        //taking input element for array
        for(int i = 0; i < size; i++) {
            scanf("%d", &numbers[i]);
        }

        //extracting non-decreaseing sub-array
        short int countNonDecSub = 0;

        for(int start = 0; start < size; start++) {//start index of sub array
            for(int end = start; end < size; end++) {//end index for each start index

                //single element sud-array
                if(start == end) {
                    countNonDecSub += 1;
                }
                else{
                    //check non decresing sub-array
                    if(numbers[end-1] <= numbers[end]) { //compare end index with previous index
                        countNonDecSub += 1;
                    }
                    else {//when the sub-array is not non decreaseing
                        break;
                    }
                }
            }
        }
        printf("%hd\n", countNonDecSub);

        n++;
    }
    return 0;
}