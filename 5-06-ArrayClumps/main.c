/*
 * workshop 5 question 6
 * duncan kirkland
 * 25 / 03 / 17
 *
 * works: yes
*/

#include <stdio.h>

int main()
{
    int capacity;
    printf("hello,\nhow many items will you enter? ");
    scanf("%d", &capacity);

    // validate input
    while(capacity < 0 || capacity > 64) {
        printf("sorry, you can only enter between 0 and 64 items.\n");
        printf("so, how many items will you enter? ");
        scanf("%d", &capacity);
    }

    // get input
    int numbers[capacity];
    for(int i = 0; i < capacity; i++) {
        printf("%d. ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // find clumps
    int clumps = 0;
    for(int i = 0; i < capacity; i++) {
        if(numbers[i] == numbers[i + 1]) {
            while(numbers[i] == numbers[i + 1]) {
                i++;
            }
            clumps++;
        }
    }
    
    printf("there %s %d clump%s in your array.\n", clumps != 1 ? "were" : "was", clumps, clumps != 1 ? "s " : " ");

    return 0;
}
