#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int number;
    scanf("%d", &number);
    int max = number;

    for (int i=1; i<n; i++) {
        scanf("%d", &number);
        if(number > max){
            max = number;
        }
    }
    printf("%d", max);
    
    return 0;
}