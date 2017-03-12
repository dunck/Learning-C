#include <stdio.h>

int main(int argc, char **argv)
{
    char desiredGrade[1];
    double desiredGradeScore = 0, currentGradeScore = 0, finalExamWeight = 0;
	printf("Enter desired grade: ");
    scanf("%s", desiredGrade);
    printf("Enter minimum score required for desired grade: ");
    scanf("%lf", &desiredGradeScore);
    printf("Enter current average score in course: ");
    scanf("%lf", &currentGradeScore);
    printf("Enter final exam weight as percentage of course grade: ");
    scanf("%lf", &finalExamWeight);
    
    double scoreNeeded = 0;
    double currentWeight = 100 - finalExamWeight;
    scoreNeeded = ((desiredGradeScore * 100) - (currentGradeScore * currentWeight)) / finalExamWeight;
    printf("To get a grade of %s you must achieve a score of %.2lf.", desiredGrade, scoreNeeded);
    
    return 0;
}
