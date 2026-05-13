#include<stdio.h>

int main() {

    int n, remain, orininal_num;
    scanf("%d", &n);

    orininal_num = n;   // putting input to compare with reverse_num

    int reverse_num = 0;
    while(n>0) {
        remain = n%10;  //get remainder 
        reverse_num = (reverse_num * 10) + remain; // putting remander in reverse position
        n/=10; // decrese n divided by 10
    }

    if(orininal_num == reverse_num) {
        printf("%d\n", reverse_num);
        printf("YES\n");
    }else {
        printf("%d\n", reverse_num);
        printf("NO\n");
    }

    return 0;
}