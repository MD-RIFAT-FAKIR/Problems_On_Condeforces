#include<stdio.h>

int main() {
    //taking size of array
    int sizeOfA, sizeOfB;
    scanf("%d %d", &sizeOfA, &sizeOfB);

    //decleing array
    int numbersOfA[sizeOfA];
    int numbersOfB[sizeOfB];

    //taking input element for number of A
    for(int i = 0; i < sizeOfA; i++) {
        scanf("%d", &numbersOfA[i]);
    }
    
    //taking input element for number of A
    for(int i = 0; i < sizeOfB; i++) {
        scanf("%d", &numbersOfB[i]);
    }


    //check is numberB is a subsequence of numberA
    int matchedCount = 0, checkStart = 0;

    for (int i = 0; i < sizeOfB; i++) {//select numbersOfB
        for (int j = checkStart; j < sizeOfA; j++) {//select numbsOfA
            if(numbersOfB[i] == numbersOfA[j]) {
                matchedCount += 1;
                checkStart    = (j + 1);//next chaeck will start after found index
                break;
            }
        }
    }

    if(matchedCount == sizeOfB) {
        printf("YES");
        return 0;
    }

    printf("NO");

    return 0;

}