#include<stdio.h>
#include<math.h>

//check Palindrome
void checkPalindrome(int length, int number) {
    int isPalindrome = 1;//assumed number is palindorme

    while(length >= 2) {
        int leastSegnificantBit = (number % 2);//getting last bit of the number in binary
        int mostSegnificantBit  = number / pow(2,length-1);//getting first bit of the number in binary

        //chek if last and first bit are equal
        if(mostSegnificantBit == leastSegnificantBit) {
            number /= 2;//update number for next check
            length -= 2;//update length for chck next mostSegnificantBit
            number = number % (int) pow(2,length);//remove leftmost bit, keep middle bits
        }
        else{//if last and first bit are not equal
            isPalindrome = 0;
            break;//do not need next chek
        }
    }

    if(isPalindrome) {
        printf("YES");
    }else{
        printf("NO");
    }
}


//count number of binary bit has of number
int countBinaryDigit(int number) {

    int length = 0;//number of bit

    while(number > 0) {//counting bit's lenght of number
        length += 1;//pudate count for bit
        number /= 2;//updating number
    }

    return length;
}

int main() {
    //taking input number
    int number;
    scanf("%d", &number);

    if(number%2 != 0) {//if number is odd
        int length = countBinaryDigit(number);//call countBinaryDigit()

        checkPalindrome(length, number);//call checkPalindrome()
    }
    else{
        //if number is even,then no need check for palindrome
        printf("NO");
    }


    return 0;
}