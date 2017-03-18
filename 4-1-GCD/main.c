/*
 * 1806ict: workshop 4 question 1
 * ------------------------------
 * duncan kirkland
 * 18/03/2017
*/

#define SMALLEST(u, v) (u < v ? u : v)

#include <stdio.h>

int getGCD(int, int);

int main()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("the greatest common denominator of %d and %d is %d.\n", a, b, getGCD(a, b));

    return 0;
}

int getGCD(int x, int y)
{
    // if the numbers are the same, the GCD is the number
    if(x == y)
        return x;
    // find the GCD
    for(int i = SMALLEST(x, y); i > 1; i--)
        if(x % i == 0 && y % i == 0)
            return i;
    // if can't find a GCD, return 1
    return 1;
}
