/*
 * 1806ict: workshop 3 question 4
 * ------------------------------
 * duncan kirkland
 * 13/03/2017
*/

#define ASCII_TO_INT(x)         (x - 48)
#define INT_TO_CHAR_ARRAY(x, c) (sprintf(c, "%d", x))
#define SET_POSITIVE(x)         (x = fabs(x))

#include <stdio.h>
#include <math.h>
#include "functions.h"

int main()
{
    int number = 0;
    printf("please enter a number: ");
    scanf("%d", &number);

    printf("you entered these digits: ");
    // if the number is negative, set it positive
    if(number < 0) {
        printf("negative ");
        SET_POSITIVE(number);
    }
    // store the number of digits in var numberLength
    int numberLength = log10(number) + 1;
    // fill var digits with the digits in number
    char digits[numberLength];
    INT_TO_CHAR_ARRAY(number, digits);
    // loop through var digits and print the digit's lexical value
    for(int i = 0; i < numberLength; i++) {
        printf("%s ", lexicalDigit(ASCII_TO_INT(digits[i])));
    }
    printf("\n");

    return 0;
}
