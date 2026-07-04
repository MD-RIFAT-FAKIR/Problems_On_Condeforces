#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    //first half triangle
    for(int i=1; i<=n; i++) {
        //spaces before first triangle
        for(int j=1; j<=n-i; j++) { 
            printf(" ");
        }
        //star for first triangle
        for(int k=1; k<=(i*2)-1; k++) {
            printf("*");
        }
        //new line after every outerloop iteration 
        printf("\n");
    }
    
    //second half tringle
    for(int l=0; l<n; l++) {
        //spaces before second half triangle
        for(int m=0; m<l; m++) {
            printf(" ");
        }
        //star for second half triangle
        for(int p=0; p<(2*(n-l)-1); p++) {
            printf("*");
        }
        //new line after every outerloop iteration
        printf("\n");
    }

    return 0;
}