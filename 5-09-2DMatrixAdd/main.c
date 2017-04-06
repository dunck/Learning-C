/*
 * workshop 5 question 9
 * duncan kirkland
 * 25 / 03 / 17
 *
 * works: yes but not as good as it could
*/

#include <stdio.h>

int main()
{
    int width, depth;
    printf("hello,\nhow wide are your matrices? ");
    scanf("%d", &width);
    printf("how deep are your matrices? ");
    scanf("%d", &depth);

    // validate width
    while(width < 0 || width > 5) {
        printf("sorry,\nyour matrices may only be between 0 and 5 units wide.\n");
        printf("so, how wide will your matrices be? ");
        scanf("%d", &width);
    }

    // validate depth
    while(depth < 1 || depth > 5) {
        printf("sorry,\nyour matrices may only be between 0 and 5 units deep.\n");
        printf("so, how deep will your matrices be? ");
        scanf("%d", &depth);
    }

    // instantiate arrays
    int in1[width][depth];
    int in2[width][depth];
    
    // begin collecting user input
    printf("\nARRAY 1\n");
    for(int i = 0; i < width; i++) {
        for(int j = 0; j < depth; j++) {
            printf("col %d row %d = ", i + 1, j + 1);
            scanf("%d", &in1[i][j]);
        }
    }    
    printf("\nARRAY 2\n");
    for(int i = 0; i < width; i++) { 
        for(int j = 0; j < depth; j++) {
            printf("col %d row %d = ", i + 1, j + 1);
            scanf("%d", &in2[i][j]);
        }
    }

    printf("\n ");

    // print array sum
    for(int i = 0; i < width; i++) {
        printf("%5d", i + 1);
    }
    printf("\n");
    for(int i = 0; i < width; i++) {
        printf("%1d", i + 1);
        for(int j = 0; j < depth; j++) {
            printf("%5d", in1[i][j] + in2[i][j]);
        }
        printf("\n");
    }

    return 0;
}