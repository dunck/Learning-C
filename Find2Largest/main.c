/*
 * 1806ict: workshop 3 question 6
 * ------------------------------
 * duncan kirkland
 * 16/03/2017
*/

#define MAX_BUFFER 100

#include <stdio.h>

int main()
{
    int max;
    int max2;
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

        // if it's the first run
        if(i == 0) {
            // set the max value as current input
            max = input[i];
        }
        // if it's the second run
        else if(i == 1) {
            // if the current input is greater than previous input
            if(input[i] > max) {
                // set the max value as current input and 2nd max as previous max
                max2 = max;
                max = input[i];
            } else {
                // otherwise, set the 2nd max as current input
                max2 = input[i];
            }
        } 
        // otherwise, if the current input is greater than previous max
        else if(input[i] > max) {
            // set the max value as current input and 2nd max as previous max
            max2 = max;
            max = input[i];
        } 
        // otherwise, if the current input is greater than previous 2nd max
        else if(input[i] > max2) {
            // set the 2nd max as current input
            max2 = input[i];
        }
        // increment the pointer location by the number of bytes sscanf read
        pointerLocation += bytesRead;
    }

    printf("largest number entered: %d\nsecond largest number entered: %d\n", max, max2);

    // nullify any leftover data
    if(*pointerLocation != '\0')
        pointerLocation = 0;

    return 0;
}
