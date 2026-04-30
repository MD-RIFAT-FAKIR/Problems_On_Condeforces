#include<stdio.h>

int main()
{
    int X;
    do{
        scanf("%d", &X);
        if(X == 1999) {
            printf("Correct\n");
        }else{
            printf("Wrong\n");
        }
    }while (X != 1999);
    
    return 0;
}