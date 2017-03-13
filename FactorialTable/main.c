#include <stdio.h>

int main(int argc, char** argv)
{
    int start = 1;
    int end = 10;

    // prints x from $start to $end as x : x!
    printf("n : n!\n------\n");
    int current = start;
    int currentMultiple = start;
    for(; current <= end; current++) {
        currentMultiple *= current;
        printf("%d : %d\n", current, currentMultiple);
    }

    return 0;
}
