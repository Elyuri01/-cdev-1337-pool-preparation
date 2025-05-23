#include <stdio.h>

// Write a program that asks the user for five grades, then displays the total and the average of these grades.

int main ()
{
    float grade1, grade2, grade3, grade4, grade5;
    int numgrade = 5;

    printf("Enter grade number 1\n");
    scanf("%f", &grade1);
    printf("Enter grade number 2\n");
    scanf("%f", &grade2);
    printf("Enter grade number 3\n");
    scanf("%f", &grade3);
    printf("Enter grade number 4\n");
    scanf("%f", &grade4);
    printf("Enter grade number 5\n");
    scanf("%f", &grade5);

    printf("The sum of your grades is %.2f\n", grade1 + grade2 + grade3 + grade4 + grade5);
    printf("The average of your grade is %.2f\n", (grade1 + grade2 + grade3 + grade4 + grade5) / numgrade); 
    
    return 0;
}

