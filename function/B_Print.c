#include<stdio.h>

void printAllnumber(short int num) {
    //print 1 to num without leading or trilling spacees
    for(int i = 1; i <= num; i++) {
        if(i < num) {
            printf("%hd ", i);
        }else {
            printf("%hd", i);
        }
    }
}

int main() {
    //taking in number
    short int number;
    scanf("%d", &number);

    printAllnumber(number);//call function

    return 0;
}