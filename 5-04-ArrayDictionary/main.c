/*
 * workshop 5 question 4
 * duncan kirkland
 * 24 / 03 / 17
*/

#include <stdio.h>

int main()
{
    printf("hello,\n");
    printf("please enter 20 integers between 1 and 10!\n");

    // get input data
    int numbers[20];
    for(int i = 0; i < 20; i++) {
        printf("%d. ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // find unique
    //   keep record of which integers have been entered
    int unique[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    for(int i = 0; i < 20; i++) {
        if(unique[numbers[i]] != 1) {
            unique[numbers[i]] = 1;
        }
    }

    // print unique
    printf("the unique numbers you entered were: ");
    for(int i = 0; i < 10; i++) {
        if(unique[i] == 1) {
            printf("%d ", i);
        }
    }
    
    printf("thanks!");

    return 0;
}
