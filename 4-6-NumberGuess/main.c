/*
 * 1806ict: workshop 4 question 6
 * ------------------------------
 * duncan kirkland
 * 18/03/2017
*/

#define MAXBOUND 1000

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandInt();
void route(int, int);

int main()
{
    // initialise thread generator state
    srand(time(NULL));
    // choose a random number
    int random = getRandInt();

    // ask user to guess
    // set var guess to a random number that is guarenteed not to be the previous random
    int guess = getRandInt();
    printf("guess what number I'm thinking of: ");
    while(guess != random) {
        scanf("%d", &guess);
        route(guess, random);
    }

    return 0;
}

int getRandInt()
{
    return rand() % MAXBOUND;
}

void route(int u, int v)
{
    if(u > v)
        printf("colder! your number is more than mine.\n");
    else if(u < v)
        printf("warmer! your number is less than mine.\n");
    else
        printf("congratulations! my number was %d.\n", v);
}
