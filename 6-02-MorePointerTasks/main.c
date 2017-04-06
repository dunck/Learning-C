/*
 * workshop 6 question 2
 * duncan kirkland
 * 06 / 04 / 17
 *
 * works: yes but not as good as it could
*/

#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int* myPtr = NULL;
    int* otherPtr = NULL;
    
    printf("myPtr=%p otherPtr=%p x=%d y=%d\n", myPtr, otherPtr, x, y);
    myPtr = &x;
    printf("myPtr=%p otherPtr=%p x=%d y=%d\n", myPtr, otherPtr, x, y);
    otherPtr = &y;
    printf("myPtr=%p otherPtr=%p x=%d y=%d\n", myPtr, otherPtr, x, y);
    *myPtr = 4;
    printf("myPtr=%p otherPtr=%p x=%d y=%d\n", myPtr, otherPtr, x, y);
    *otherPtr = *myPtr;
    printf("myPtr=%p otherPtr=%p x=%d y=%d\n", myPtr, otherPtr, x, y);
    x = 5;
    printf("myPtr=%p otherPtr=%p x=%d y=%d\n", myPtr, otherPtr, x, y);
    otherPtr = myPtr;
    printf("myPtr=%p otherPtr=%p x=%d y=%d\n", myPtr, otherPtr, x, y);
    *otherPtr = 6;
    printf("myPtr=%p otherPtr=%p x=%d y=%d\n", myPtr, otherPtr, x, y);
    
    return 0;
}
