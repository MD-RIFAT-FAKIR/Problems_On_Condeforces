#include<stdio.h>

int main() {

    //takin size and pair
    int size, pair;
    scanf("%d %d",&size, &pair);

    //declareing array
    long long int numbers[size];

    //taking input element for array
    for(int i = 0; i < size; i++) {
        scanf("%lld", &numbers[i]);
    }

    //declare prefixsum array
    long long int prefix[size];

    long long int sumOfPvousElemts = 0;
    for(int i = 0; i < size; i++) {//doing prefix sum
        prefix[i] = (sumOfPvousElemts + numbers[i]);//prefix sum
        sumOfPvousElemts = prefix[i];//update sum of previous elements
    }

    //calculating range sum
    long long int rangeSum = 0;
    while(pair > 0) {
        //taking range as pair
        int left, right;
        scanf("%d %d", &left, &right);

        left -= 1; right -= 1; //updateing actual value for tracking index

        /*if we cut the prefix before left,then right contains prefix form left to right,
        which is similar to left ot right range sum*/

        if(left == 0) {//then right contains sumation of all elements form(0 - right)
            rangeSum = prefix[right];
        }else{
            rangeSum = ( prefix[right] - prefix[left-1] );
        }
        
        printf("%lld\n", rangeSum);
        
        pair--;
    }

    return 0;
}