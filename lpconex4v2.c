#include <stdio.h>

/* Write a program that prompts the user to enter a positive integer.
Calculate the factorial of that number using a loop.
If the user enters a negative number, display an error message and ask them to enter a positive integer again.
Additionally, implement a check to ensure that the user does not enter a number greater than 12, as factorials grow
very large and can cause overflow in standard integer types */

int main() {
    
    int i;
    int factorial = 1;

    printf("Enter a positive integer(a whole number , not decimal) : ");
    if (scanf("%d", &i) != 1) {
	    printf("Invalid input!(You did not enter a number)\n");
	    return 1;
    }
    else if (i < 0) {
	    printf("Error! Please enter a positive integer\n");
	    return 1;
    }
    else if (i > 12) {
	     printf("Warning!The factorial of your number is too big.\nEnter a number no greater than 12\n");
	     return 1;
    }

    while (i >= 1) {
	    factorial = factorial * i;
            i--; 
    }
    printf("The factorial of your number is : %d\n", factorial);
    return 0;
}

		    
/* Breakdown of the Code

Variable Declarations:

int i; declares a variable to store the user input.
int factorial = 1; initializes the variable to hold the result of the factorial calculation.

User Input:

The program prompts the user to enter a positive integer.
The if (scanf("%d", &i) != 1) checks if the input is valid. If the input is not a valid integer, it prints an error 
message and exits.

Input Validation:

else if (i < 0) checks if the number is negative and displays an error message if it is.
else if (i > 12) checks if the number is greater than 12 and warns the user about potential overflow.

While Loop:

The loop while (i >= 1) calculates the factorial by multiplying the current value of i with factorial and decrementing i in each iteration.

Output:

Finally, printf("The factorial of your number is : %d\n", factorial); prints the result.

Expected Output
Your program should work as expected. Here’s what the output would look like for different inputs:

If the user enters 5:
The factorial of your number is : 120

If the user enters -3:
Error! Please enter a positive integer

If the user enters 15:
Warning! The factorial of your number is too big.
Enter a number no greater than 12 */

