#include<stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    int number, digit, found;
    
    int foundAny = 0;

    //
    for(int i=a; i<=b; i++) {
        number = i;

        //extract number digit by digit
        found = 1; 
        while(number>0) {
            digit = number%10;
            if(digit==4 || digit==7) {
                number /= 10;
            }else{
                found = 0;
                break;
            }
        }//end inner loop

        if(found) {
            printf("%d ", i);
            foundAny = 1;
        }
    }

    if(!foundAny) {
        printf("-1");
    }

    return 0;
}