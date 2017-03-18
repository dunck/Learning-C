/*
 * 1806ict: workshop 3 question 11
 * ------------------------------
 * duncan kirkland
 * 18/03/2017
*/

#define TOLERANCE 0.0000001

#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 4;
    int count = 1;

    for(int denom = 3, sign = -1; fabs(pi - M_PI) > TOLERANCE; count++, denom += 2, sign *= -1) {
        pi += sign * (double)4 / denom;
        printf("pi: %lf\ttolerance: %lf\titer: %d\n", pi, fabs(pi - M_PI), count);
    }

    return 0;
}
