/*
 * 1806ict: workshop 4 question 4
 * ------------------------------
 * duncan kirkland
 * 18/03/2017
*/

#include <stdio.h>

int isPerfect(int);

int main()
{
    int count = 0;
    while(++count < 1000)
        if(isPerfect(count))
            printf("%d is perfect.\n", count);
    return 0;
}

int isPerfect(int x)
{
    int sum = 1;
    for(int i = 2; i <= x / 2; i++)
        sum += (x % i == 0 ? i : 0);
    return sum == x ? 1 : 0;
}