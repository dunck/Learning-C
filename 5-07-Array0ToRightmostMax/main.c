/*
 * workshop 5 question 7
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
    while(capacity < 2 || capacity > 64) {
        printf("sorry, you may only enter between 2 and 64 items.");
        printf("so, how many items will you enter? ");
        scanf("%d", &capacity);
    }

    // get input
    int numbers[capacity];
    for(int i = 0; i < capacity; i++) {
        printf("%d. ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // replace 0's with next max number
    for(int i = 0; i < capacity; i++) {
        if(numbers[i] == 0) {
            int max = 0;
            // start looping from wherever the 0 was found
            for(int j = i; j < capacity; j++) {
                // update max every time a new max is found
                if(numbers[j] > max) {
                    max = numbers[j];
                }
            }
            // replace 0 with rightmost max
            numbers[i] = max;
        }
    }
    
    // return adjusted data
    printf("after replacing 0's with the next max:\n");
    for(int i = 0; i < capacity; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
