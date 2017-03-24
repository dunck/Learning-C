/*
 * workshop 5 question 2
 * duncan kirkland
 * 24 / 03 / 17
*/

#include <stdio.h>

int main()
{
    int capacity;
    printf("hello,\nhow many integers will you enter?\t");
    scanf("%d", &capacity);
    
    // check if capacity is reasonable
    while(capacity < 0 || capacity > 64) {
        printf("sorry,\nyou may only store 0 -> 64 integers in the array.\n");
        printf("how many integers will you enter?\t");
        scanf("%d", &capacity);
    }
    
    // get input
    int numbers[capacity];
    printf("so, enter %d integers.\n", capacity);
    for(int i = 0; i < capacity; i++) {
        printf("%d.\t", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // get min and max
    int min = numbers[0];
    int max = numbers[0];
    // find numbers in the array that are respectively less than min or greater than max
    for(int i = 1; i < capacity; i++) {
        if(min > numbers[i]) {
            min = numbers[i];
        }
        if(max < numbers[i]) {
            max = numbers[i];
        }
    }
    printf("the greatest number you entered was %d\nand the lowest was %d.\n", max, min);
    printf("thanks!\n");
    

    return 0;
}
