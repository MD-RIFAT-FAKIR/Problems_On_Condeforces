#include<stdio.h>

int main() {
    
    //size of array
    short int size;
    scanf("%hd", &size);

    //declareing array A and B
    int numbersOfA[size], numbersOfB[size];

    //taking input element for A
    for(int i = 0; i < size; i++) {
        scanf("%d", &numbersOfA[i]);
    }
    
    //taking input element for B
    for(int i = 0; i < size; i++) {
        scanf("%d", &numbersOfB[i]);
    }

    //checking is B a premutaion of A
    int matched = 0;

    for(int i = 0; i < size; i++) {//traversing B
        for(int j = i; j < size; j++) {//traversing A

            if(numbersOfB[i] == numbersOfA[j]) {//check elements of B match with element of A

                matched = 1;//if found B in A

                if(i != j) {//check the positon of both element

                    //update the position of founded element
                    int temp      = numbersOfA[j];
                    numbersOfA[j] = numbersOfA[i];
                    numbersOfA[i] = temp;
            
                }
                //after matched check the next element of B with A
                break;
            }
        }
        if(!matched){
            printf("no");

            return 0;
        }
        //update matched for searching next B in A
        matched = 0;
    }

    //if all of B elements founded in A
    printf("yes");

    return 0;
}