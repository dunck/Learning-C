#include <stdio.h>

int main(int argc, char **argv)
{
    int hourIn, minuteIn, secondIn;
    int hourAdd, minuteAdd, secondAdd;
	printf("Enter a time (hh mm ss): ");
    scanf("%d %d %d", &hourIn, &minuteIn, &secondIn);
    printf("Enter a time interval to add to the previous time (hh mm ss): ");
    scanf("%d %d %d", &hourAdd, &minuteAdd, &secondAdd);
    
    int hours = 0, minutes = 0, seconds = 0;
    // add time:seconds
    seconds += (secondIn + secondAdd) % 60;
    if((secondIn + secondAdd) > 60)
    {
        minutes++;
    }
    
    // add time:minutes
    minutes += (minuteIn + minuteAdd) % 60;
    if((minuteIn + minuteAdd) > 60)
    {
        hours++;
    }
    
    // add time:hours
    hours += (hourIn + hourAdd) % 24;
    
    printf("New time (hh mm ss): %d %d %d", hours, minutes, seconds);
    
	return 0;
}
