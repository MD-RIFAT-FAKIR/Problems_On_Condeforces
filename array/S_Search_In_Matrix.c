#include<stdio.h>

int main() {

    //taking size for 2d array
    short int rows, colums, searchElemtne;
    scanf("%hd %hd", &rows, &colums);

    //declareing 2d array
    short int numbers[rows][colums];

    //taking input for array
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colums; j++) {
            scanf("%hd", &numbers[i][j]);
        }
    }

    //searching element
    scanf("%hd", &searchElemtne);

    //traversing the array to find searchElement
    short int isFound = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colums; j++) {
            if(searchElemtne == numbers[i][j]) {
                isFound = 1;
                printf("will not take number");
                break;
            }
        }
        if(isFound) {
            break;
        }
    }

    if(!isFound) {
        printf("will take number");
    }

    return 0;
}