#include<stdio.h>

int main() {
    //taking size
    int size, limit;
    scanf("%d %d", &size, &limit);

    //declareing array
    int numbers[size];

    //takin input element for array
    for(int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    //frequency array with all 0 values
    int frequency[limit];
    for(int i = 0; i < limit; i++) {
        frequency[i] = 0;
    }

    //updateing frequency 
    for(int i = 0; i < size; i++) {
        int index = numbers[i];//assumed i'th element as index of qrequency array
        frequency[index-1] += 1;//then increase that index;
    }

    //print frequency array after updateing
    for(int i = 0; i < limit; i++) {
        printf("%d\n", frequency[i]);
    }

    return 0;
}