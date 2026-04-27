#include<stdio.h>

int main()
{
    int N, years, months, days;

    scanf("%d", &N);
    
    years = N / 365;

    int days_remain = N % 365;
    months          = days_remain / 30;
    days            = days_remain % 30;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days", days);

    return 0;
}