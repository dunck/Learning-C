/*
 * workshop 6 question 1
 * duncan kirkland
 * 06 / 04 / 17
 *
 * works: yes but not as good as it could
*/

#include <stdio.h>

int main()
{
    // (a)
    char next = 'B';
    // (b)
    char current = 'y';
    // (c)
    char *ptr = NULL;
    // (d)
    ptr = &current;
    // (e)
    *ptr = '0';
    // (f)
    ptr = &next;
    // (g)
    *ptr = 'd';
    // (h)
    printf("address of ptr=%p\n", ptr);
    // (i)
    printf("next=%c current=%c\n", next, current);
    
	return 0;
}
