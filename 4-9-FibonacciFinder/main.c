/*
 * 1806ict: workshop 4 question 9
 * ------------------------------
 * duncan kirkland
 * 20/03/2017
 *
*/

#include <stdio.h>
#include <math.h>

int getFibonacci(int);

int main()
{
    int n;
    printf("which number do you want from the Fibonacci series? ");
    scanf("%d", &n);
    printf("the number in position %d of the Fibonacci series is %d.", n, getFibonacci(n));

    return 0;
}

int getFibonacci(int pos)
{
    // special cases
    // recursion relies on having 2 numbers before hand - fib[0] and fib[1] do not
    if(pos == 0)
        return 0;
    if(pos == 1)
        return 1;

    // uses recursion to find the previous numbers
    return getFibonacci(pos - 1) + getFibonacci(pos - 2);
}