/*
 * 1806ict: workshop 3 question 10
 * ------------------------------
 * duncan kirkland
 * 13/03/2017
*/

#define FROM_ASCII_TO_INT -48
#define INT_TO_CHAR_ARRAY(x, c) (sprintf(c, "%d", x))

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned binary;
    printf("enter a binary number: ");
    scanf("%d", &binary);

    int numberLength = log10(binary) + 1;
    char digits[numberLength];
    INT_TO_CHAR_ARRAY(binary, digits);

    for(int i = 0; i < numberLength; i++) {
        if(!(digits[i] == 48 || digits[i] == 49)) {
            printf("you did not enter a valid base 2 number.\n");
            return 0;
        }
    }

    int sum = 0;
    for(int i = 0; i < numberLength; i++) {
        sum += digits[i] FROM_ASCII_TO_INT * pow(2, numberLength - i - 1);
    }
    printf("your number is %d in decimal.\n", sum);
}
