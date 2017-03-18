/*
 * 1806ict: workshop 4 question 5
 * ------------------------------
 * duncan kirkland
 * 18/03/2017
*/

#define MAX_TESTS 1000

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int flipCoin();

int main()
{
    srand(time(NULL));
    int heads = 0;
    for(int i = 1; i < MAX_TESTS; i++, heads += flipCoin());
    printf("heads: %d\ttails: %d\n", heads, MAX_TESTS - heads);
    return 0;
}

int flipCoin()
{
    // logical operation: if rand() > RAND_MAX / 2,
    // it is in the second half of all possible random numbers
    // otherwise it is in the first half
    // will give 1 or 0 respectively
    return rand() > RAND_MAX / 2;
}