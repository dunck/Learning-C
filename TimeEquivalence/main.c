#include <stdio.h>

int main()
{
	int secondsIn;
    int hoursOut = 0;
    int minutesOut = 0;
    int secondsOut = 0;
    printf("Please enter a quantity of time in seconds: ");
    scanf("%d", &secondsIn);
    
    int secondsRemaining = secondsIn;
    while(secondsRemaining >= 3600) {
        hoursOut++;
        secondsRemaining -= 3600;
    }
    while(secondsRemaining >= 60) {
        minutesOut++;
        secondsRemaining -= 60;
    }
    secondsOut = secondsRemaining;
    
    printf("%d seconds is %d hours, %d minutes and %d seconds.", secondsIn, hoursOut, minutesOut, secondsOut);
    
    
	return 0;
}
