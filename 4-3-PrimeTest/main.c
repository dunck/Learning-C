/*
 * 1806ict: workshop 4 question 3
 * ------------------------------
 * duncan kirkland
 * 18/03/2017
*/

#include <stdio.h>

int isPrime(int);

int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    if(isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}

int isPrime(int x)
{
    for(int i = 2; i <= (int)sqrt(x); i++)
        if(x % i == 0)
            // return 0 (false) if there exists a number that x can divide into
            return 0;
    // otherwise return 1 (true) if there does not exist another number than 1 or x that x can divide into
    return 1;
}