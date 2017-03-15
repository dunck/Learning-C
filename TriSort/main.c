/*
 * 1806ict: workshop 3 question 7
 * ------------------------------
 * duncan kirkland
 * 16/03/2017
*/

#define MAX_INPUT 3

#include <stdio.h>

int main(int argc, char** argv)
{
    static int input[MAX_INPUT];
    printf("enter three numbers delimited by a space: ");
    scanf("%d %d %d", &input[0], &input[1], &input[2]);

    for(int i = 0; i < MAX_INPUT; i++) {
        // if middle number is more then right number
        if(input[1] > input[2]) {
            // swap them
            input[3] = input[1];
            input[1] = input[2];
            input[2] = input[3];
        }
        // if middle number is less than left number
        if(input[1] < input[0]) {
            // swap them
            input[3] = input[0];
            input[0] = input[1];
            input[1] = input[3];
        }
    }
    printf("your numbers sorted: %d %d %d\n", input[0], input[1], input[2]);
    return 0;
}