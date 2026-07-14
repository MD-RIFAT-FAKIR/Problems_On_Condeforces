#include<stdio.h>

int main() {

    //taking size;
    short int size;
    scanf("%hd", &size);

    //declareing array
    short int numbers[size][size];

    //taking input element for array
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            scanf("%hd", &numbers[i][j]);
        }
    }

    //sumation of primary diagonal elements
    short int sumOfPrimryDignl = 0;

    for(int i = 0; i < size; i++) {
        int j = i;
        sumOfPrimryDignl += numbers[i][j];
    }

    //sumation of secondary diagonal elements
    short int sumOfSecndryDignl = 0;
    for(int i = 0; i < size; i++) {
        int j = ((size-i) - 1);
        sumOfSecndryDignl += numbers[i][j];
    }

    //claculate absulate diff of sumOfPrimryDignl and sumOfSecndryDignl
    short int absulateDiff = (sumOfPrimryDignl - sumOfSecndryDignl);
    if(absulateDiff < 0) {
        absulateDiff = -(absulateDiff);//convert to positive
    }
    printf("%hd", absulateDiff);

    return 0;
}