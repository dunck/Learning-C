#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
    printf("quadratic solver: ax^2 + bx + c = 0\n");

    double a = 0, b = 0, c = 0;
    printf("enter a: ");
    scanf("%lf", &a);
    printf("enter b: ");
    scanf("%lf", &b);
    printf("enter c: ");
    scanf("%lf", &c);

    // quadratic equation: (-b +- sqrt(b^2 - 4ac)) / (2a)
    double x1 = 0, x2 = 0;
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("the solutions to \n\t%lfx^2 + %lfx + %lf = 0 \nare \n\tx = %lf or \n\tx = %lf", a, b, c, x1, x2);
    return 0;
}
