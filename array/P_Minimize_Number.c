#include<stdio.h>

int main() {

    //taking size
    short int size;
    scanf("%hd", &size);

    //declareing array
    int numbers[size];

    //tkaing input element for array
    for(int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }


    short int countOdd = 0, countPerformed = 0;

    //loop will iterates untill found any odd
    while(countOdd < 1) {

        //check all element are even
        for(int i = 0; i < size; i++) {
            if((numbers[i] % 2 ) != 0) {
                countOdd = 1;
                break;
            }
        }

        if(!countOdd) {
            //divide element by 2 and update 
            for(int i = 0; i < size; i++) {
                numbers[i]    = (numbers[i] / 2);
            }
            countPerformed += 1;
        }

    }

    printf("%hd", countPerformed);
    

    return 0;
}