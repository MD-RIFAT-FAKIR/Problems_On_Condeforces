#include<stdio.h>

int main() {

    int size;
    scanf("%d", &size);
    int numbers[size];

    //taking input in array
    for(int i=0; i<size; i++) {
        scanf("%d", &numbers[i]);
    }

    //taking searching element
    int searchElement;
    scanf("%d", &searchElement);

    //search the  elements in array
    int exist = 0;

    for(int i=0; i<size; i++) {
        if(searchElement == numbers[i]) {
            printf("%d", i);
            exist = 1;
            break;
        }
    }

    //if doesn't exist any print -1
    if(!exist) {
        printf("-1");
    }


    return 0;
}