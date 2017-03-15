/*
 * 1806ict: workshop 3 question 5
 * ------------------------------
 * duncan kirkland
 * 13/03/2017
 * 
 * this method took a lot of research
 * it uses pointers to iterate over a raw input
 * it will find the greatest number among a list (seperated by whitespace) before hitting enter
 * 
 * 
*/

#define MAX_BUFFER 100

#include <stdio.h>

int main()
{
    int max;
    int input[MAX_BUFFER];

    // define a buffer to store raw user input
    char buffer[MAX_BUFFER];
    // get user input with fgets
    // read from stdin to the buffer: do not proceed if no data given (not necessarily no data entered)
    printf("enter some numbers to find the max.: ");
    if(fgets(buffer, sizeof buffer, stdin) == NULL)
        return 0;

    // point var pointerLocation to the start of the buffer
    char* pointerLocation = buffer;
    int bytesRead;
    // loop over the buffer until sscanf can find no more integer input
    for(int i = 0; sscanf(pointerLocation, "%d %n", &input[i], &bytesRead) == 1; i++) {
        // if it is either the first run or the current input is greater than the previous max,
        //     set the max as the current input
        if(i == 0 || input[i] > max) {
            max = input[i];
        }
        // increment the pointer location by the number of bytes sscanf read
        pointerLocation += bytesRead;
    }
    
    printf("max. number entered: %d\n", max);
    
    // nullify any leftover data
    if(*pointerLocation != '\0')
        pointerLocation = 0;

    return 0;
}
