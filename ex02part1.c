# include <stdio.h>

/* a program that asks the user for two numbers, then displays the sum, difference, division, and
 remainder (modulo) of the two numbers*/

int main() 
{
    int num1;
    int num2;

    printf("Enter your first number\n");
    scanf("%d", &num1);
    printf("Enter your second number\n");
    scanf("%d", &num2);
    printf("The sum of those numbers is %d\n", num1 + num2);
    printf("The difference of those numbers is %d\n", num1 - num2);
    printf("The division of those numbers is %d\n", num1 / num2);
    printf("The modulo of those numbers is %d\n", num1 % num2);
    
    return 0;
}
