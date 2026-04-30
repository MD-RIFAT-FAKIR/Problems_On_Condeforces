#include<stdio.h>

int main()
{
    int N , Even=0, Odd=0, Positive=0, Negative=0;
    
    scanf("%d", &N);

    for(int i=1; i<=N; i++){
        int Number;
        scanf("%d", &Number);
        if(Number>0){
            Positive+=1;
            if(Number%2==0){
                Even+=1;
            }else{
                Odd+=1;
            }
        }else{
            if(Number!=0){
                Negative+=1;
            }
            if(Number%2==0){
                Even+=1;
            }else{
                Odd+=1;
            }
        }
    }

    printf("Even: %d\n", Even);
    printf("Odd: %d\n", Odd);
    printf("Positive: %d\n", Positive);
    printf("Negative: %d\n", Negative);    

    return 0;
}