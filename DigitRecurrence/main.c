/*
 * 1806ict: workshop 3 question 8
 * ------------------------------
 * duncan kirkland
 * 19/03/2017
*/

#define INT_TO_ARRAY(x, c) (sprintf(c, "%d", x))
#define FROM_ASCII_TO_INT -48

#include <stdio.h>
#include <assert.h>
#include <math.h>

int main()
{
    int number, digitCount;
    printf("Enter a number, followed by the number of digits to print recursively: ");
    scanf("%d %d", &number, &digitCount);
    
    // get length of input number and ensure they aren't asking for more digits than exist in their number
    int numberLength = log10(number) + 1;
    while(digitCount > numberLength) {
        printf("### You must enter a number that has more digits than %d.\n", digitCount);
        printf("Enter a number, followed by the number of digits to print recursively: ");
        scanf("%d %d", &number, &digitCount);
    }
    // convert number to iterable form
    char digits[numberLength];
    INT_TO_ARRAY(number, digits);
    
    // iterate over the array printing each number up to the number of digits they asked to be printed,
    //     reducing this digit request each iteration
    do 
        for(int i = 0; i < digitCount; i++) 
            printf("%d", digits[i] FROM_ASCII_TO_INT);
    while(digitCount-- > 0);
    
    return 0;
}
