/* 
 * 1806ict: workshop 3 question 3
 * ------------------------------
 * duncan kirkland
 * 13/03/2017
*/

#include <stdio.h>

int main(int argc, char **argv)
{
    int number = 0, digitSum = 0;
	printf("please enter a number: ");
    scanf("%d", &number);
    if(number < 0) {
        return 0;
    }
    
    printf("the sum of the digits of the number %d is ", number); 
    /*...*/
    while(number != 0) {
        digitSum += number % 10;
        number /= 10;
    }   
    /*...*/ 
    printf("%d.\n", digitSum);
    
	return 0;
}
