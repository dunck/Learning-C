/*
 * workshop 5 question 1
 * duncan kirkland
 * 24 / 03 / 17
*/

#include <stdio.h>

int main()
{
    int capacity;
    printf("hello,\nhow many integers can your array store?\t");
    scanf("%d", &capacity);
    printf("so, enter %d numbers.\n", capacity);

    // get input
    int numbers[capacity];
    for(int i = 0; i < capacity; i++) {
        printf("%d.\t", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // calculate sum
    int sum = 0;
    for(int i = 0; i < capacity; i++) {
        sum += numbers[i];
    }
    printf("the sum of the numbers in your array is %d.\n", sum);
    printf("thanks!\n");
    
    return 0;
}
