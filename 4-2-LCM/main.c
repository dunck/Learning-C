/*
 * 1806ict: workshop 4 question 2
 * ------------------------------
 * duncan kirkland
 * 18/03/2017
*/

#define LARGEST(u, v) (u > v ? u : v)

#include <stdio.h>

int getLCM(int, int);

int main()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("the lowest common multiple of %d and %d is %d.\n", a, b, getLCM(a, b));

    return 0;
}

int getLCM(int x, int y)
{
    // if the numbers are the same, the LCM is the number
    if(x == y)
        return x;
    // find the LCM
    int LCM = LARGEST(x, y);
    while(LCM % x != 0 || LCM % y != 0)
        LCM++;
    return LCM;
}