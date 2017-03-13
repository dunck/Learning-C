/*
 * 1806ict: workshop 3 question 4
 * ------------------------------
 * duncan kirkland
 * 13/03/2017
*/

#include <stdio.h>
#include <math.h>

char* lexicalDigit(int digit)
{
    switch(digit) {
    case(0):
        return "zero";
    case(1):
        return "one";
    case(2):
        return "two";
    case(3):
        return "three";
    case(4):
        return "four";
    case(5):
        return "five";
    case(6):
        return "six";
    case(7):
        return "seven";
    case(8):
        return "eight";
    case(9):
        return "nine";
    default:
        return "\0";
    }
}

int main(int argc, char** argv)
{
    int number = 0;
    printf("please enter a number: ");
    scanf("%d", &number);
    if(number < 0) {
        return 0;
    }

    int numberLength = log10(number) + 1;
    printf("your number is %d digits long.", numberLength);
    
    int currentDigit = numberLength;
    
    
    printf("you entered these digits: ");
    while(currentDigit != 0) {
        printf("%d ", currentDigit);
        currentDigit--;
    }

    return 0;
}
