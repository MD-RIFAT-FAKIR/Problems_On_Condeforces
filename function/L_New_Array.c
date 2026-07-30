#include<stdio.h>

//cancate array b with array a and store in array c
void concateArray(int arrA[], int arrB[], int size) {
    //declare array c with size of a+b
    int arrC[size*2];

    //store element of arrB and concatinate arrA in arrC
    for (int i = 0; i < (size*2); i++) {
        if(i < size) {//store elements of arrB in arrC
            arrC[i] = arrB[i];
        }
        else {
            //get index of arrA
            int indexOfA = (i - size);

            //store elements of arrA in arrC
            arrC[i] = arrA[indexOfA];
        }
    }

    //printing arrC
    for(int i = 0; i < (size*2); i++) {
        printf("%d ", arrC[i]);
    }

}



int main() {
    //taking size for both array
    int size;
    scanf("%d", &size);

    //declare first array
    int firstArr[size];

    //taking input for first array
    for(int i = 0; i < size; i++) {
        scanf("%d", &firstArr[i]);
    }

    //declare second array
    int secondArr[size];

    //taking input for second array
    for(int i = 0; i < size; i++) {
        scanf("%d", &secondArr[i]);
    }

    //calling concateArray
    concateArray(firstArr, secondArr, size);


    return 0;
}