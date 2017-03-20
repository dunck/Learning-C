/*
 * 1806ict: workshop 4 question 8
 * ------------------------------
 * duncan kirkland
 * 20/03/2017
 *
*/

#define LARGEST(u, v) (u > v ? u : v)
#define SMALLEST(u, v) (u < v ? u : v)

#include <stdio.h>
#include <math.h>

int isPrime(int);

int main()
{
    int x, y, boundLower, boundUpper;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    // if the numbers are odd, set them as the next even digit
    x += x % 2; // if x is even, x % 2 = 0 and the numbers remains unchainged
    y += y % 2; // if y is odd, x % 2 = 1 and the number is incremented

    boundUpper = LARGEST(x, y); // set to largest of x & y
    boundLower = SMALLEST(x, y); // set to smallest of x & y

    for(int i = boundLower; i <= boundUpper; i += 2)       // start with a loop to iterate through every even number from and including boundLower to and including boundUpper
        for(int j = 2; j < i; j++)                         // next, begin looping over the finding prime numbers
            if(isPrime(j))                                 //
                if(isPrime(i - j)) {                       // if the difference between the found prime numbers and the initial iteration number is also a prime number,
                    printf("%d + %d = %d\n", j, i - j, i); // print the two numbers to confirm the Goldbach Conjecture
                    break;                                 // and then restart the loop for the next even iterator
                }

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