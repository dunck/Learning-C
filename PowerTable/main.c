#include <stdio.h>

int main(int argc, char** argv)
{
    int start = 1, end = 10;

    // print the number n and the number n*n
    printf("n : n^2\n-------\n");
    for(int current = start; current <= end; current++) {
        printf("%d : %d\n", current, current * current);
    }

    return 0;
}
