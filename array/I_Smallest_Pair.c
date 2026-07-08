#include<stdio.h>

int main() {

    //number of test case
    short int numberOfTestCase;
    scanf("%hd", &numberOfTestCase);

    //looping according to number of testcase
    for(int i=0; i<numberOfTestCase; i++) {

        //size of array
        short int size;
        scanf("%hd", &size);

        //declare array
        int numbers[size];

        //taking input elements for numbers arrray
        for(int i=0; i<size; i++) {
            scanf("%d", &numbers[i]);
        }

        //check the smallest result
        int smallest;

        for(int i=0; i<size; i++) {

            for(int j=i+1; j<size; j++) {
                int result = (numbers[i]+numbers[j]) + (j-i);
                //assumed first pair as smallest
                if(i==0 && j==1) {
                    smallest = result;
                }
                //compare 1st pair with other to update smallest 
                if(smallest>result) {
                    smallest = result;
                }
            }
        }

        //print the smallest result
        printf("%d\n", smallest);

    }

    return 0;
}