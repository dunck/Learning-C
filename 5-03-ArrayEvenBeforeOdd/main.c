/*
 * workshop 5 question 3
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
        printf("sorry,\ncapacity can only be between 0 and 64.");
        printf("how many integers will you enter? ");
        scanf("%d", &capacity);
    }
    
    // get array data
    int numbers[capacity];
    for(int i = 0; i < capacity; i++) {
        printf("%d. ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    printf("in order of even and then odd, the numbers you entered were:\n");
    // firstly, print all the even numbers
    for(int i = 0; i < capacity; i++) {
        if(numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    // secondly, print all the odd numbers
    for(int i = 0; i < capacity; i++) {
        if(numbers[i] % 2 == 1) {
            printf("%d ", numbers[i]);
        }
    }
    printf("thanks!");

    return 0;
}
