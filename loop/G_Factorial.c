#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    long long int factorial = 1;

    for ( int i = 1; i <= T; i++ ) {
        int N;
        scanf("%d", &N);

        for ( int j = 1; j <= N; j++ ) {
            factorial *= j;
        }
        printf("%lld\n", factorial);
        
        factorial = 1;
    }

    return 0;
}