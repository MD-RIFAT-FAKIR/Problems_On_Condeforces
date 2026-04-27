#include<stdio.h>
#include<math.h>

int main()
{
    int A, B;

    scanf("%d %d", &A, &B);

    float X = (float)A / B;

    printf("floor %d / %d = %d\n", A, B, (int)floor(X));
    printf("ceil %d / %d = %d\n", A, B, (int)ceil(X));
    printf("round %d / %d = %d\n", A, B, (int)round(X));

    return 0;
}