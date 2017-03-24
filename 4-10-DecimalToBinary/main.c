/*
 * 1806ict: workshop 4 question 10
 * -------------------------------
 * duncan kirkland
 * 20/03/2017
 *
*/

#include <stdio.h>
#include <math.h>

void printBits(int);

int main()
{
    int number;
    printf("enter a base 10 number: ");
    scanf("%d", &number);
    printBits(number);

    return 0;
}

void printBits(int number)
{
    int count = 1;
    int bin = 0;
    while(number != 0) {
        count *= 10;
        bin += ((number >>= 1) % 2) * count;
    } 
    printf("%d", bin);
}
