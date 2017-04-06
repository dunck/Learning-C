/*
 * workshop 5 question 5
 * duncan kirkland
 * 25 / 03 / 17
 *
 * works: yes
*/

#define TARGET 3
#define FOLLOWER 4

#include <stdio.h>

void swap(int[], int, int);

int main()
{
    int capacity;
    printf("hello,\nhow many items can your array store? ");
    scanf("%d", &capacity);

    // validate capacity
    while(capacity < 2 || capacity > 64) {
        printf("sorry, you can only store between 2 and 64 elements.");
        printf("how many items will you enter? ");
        scanf("%d", &capacity);
    }

    // get input
    int numbers[capacity];
    for(int i = 0; i < capacity; i++) {
        printf("%d. ", i + 1);
        scanf("%d", &numbers[i]);
        while((i == capacity - 1) && (numbers[i] == TARGET)) {
            printf("sorry, the last number can not be a %d.\n", TARGET);
            printf("%d. ", i + 1);
            scanf("%d", &numbers[i]);
        }
    }

    // reorder numbers so that all FOLLOWER's follow a TARGET
    for(int i = 0; i < capacity; i++) {
        // if the current number is TARGET and the next is not FOLLOWER,
        if((numbers[i] == TARGET) && (numbers[i + 1] != FOLLOWER)) {
            // swap out the next number with the next occuring FOLLOWER
            for(int j = 0; j < capacity; j++) {
                if(numbers[j] == FOLLOWER) {
                    swap(numbers, i + 1, j);
                    break;
                }
            }
        }
    }

    // reprint adjusted array
    printf("now, all %d's follow a %d:\n", FOLLOWER, TARGET);
    for(int i = 0; i < capacity; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

void swap(int array[], int index1, int index2)
{
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}