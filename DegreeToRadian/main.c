#include <stdio.h>
#include <math.h>

int main()
{
    double degrees;
    printf("Enter angle as degrees: ");
    scanf("%lf", &degrees);
    
    double radians = (degrees * M_PI) / 180.0;
    
    printf("Your angle as radians is %lf.", radians);
    
	return 0;
}
