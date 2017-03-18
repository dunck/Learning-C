/*
 * 1806ict: workshop 3 question 9
 * ------------------------------
 * duncan kirkland
 * 13/03/2017
*/

#define ASCII_TO_INT(x)         (x - 48)
#define INT_TO_CHAR_ARRAY(x, c) (sprintf(c, "%d", x))

#include <stdio.h>
#include <math.h>

int main()
{
    int number;
	printf("please enter a positive integer: ");
    scanf("%d", &number);
    
    while(number < 0) {
        printf("### %d is not positive.\n", number);
        printf("please enter a positive integer: ");
        scanf("%d", &number);
    }
    
    int numberLength = log10(number) + 1;
    char digits[numberLength];
    INT_TO_CHAR_ARRAY(number, digits);
    
    for(int i = 0; i < numberLength / 2; i++)
        if(digits[i] != digits[numberLength - i - 1]) {
            printf("the number %d is not a palindrome.\n", number);
            return 0;
        }
    printf("the number %d is a palindrome.\n", number);
    
	return 0;
}
