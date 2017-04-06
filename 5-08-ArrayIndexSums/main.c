/*
 * workshop 5 question 8
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
    while(capacity < 1 || capacity > 64) {
        printf("sorry, you may only enter between 1 and 64 items.\n");
        printf("so, how many items will you enter? ");
        scanf("%d", &capacity);
    }

    // get data
    int numbers[capacity];
    for(int i = 0; i < capacity; i++) {
        printf("%d. ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // find number of sum-symmetric indexes
    //   o(n^2) ?
    int indexes = 0;
    for(int i = 0; i < capacity; i++) {
        int lowerSum = 0, higherSum = 0;
        for(int j = 0; j < capacity; j++) {
            if(j < i) {
                lowerSum += numbers[j];
            } else {
                higherSum += numbers[j];
            }
        }
        if(lowerSum == higherSum) {
            indexes++;
        }
    }
    
    // return number of indexes
    printf("the number of sum-symmetric indexes in your numbers is:\n%d\nthanks!", indexes);
    
    return 0;
}
