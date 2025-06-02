#include <stdio.h>

// Calculate the factorial of the number 5 (5! = 1×2×3×4×5) using a loop
 
int main () {
     
    int factorial = 1;
    int i = 5;

    while (i >= 1) {
	    factorial = factorial * i;
	    i--;
    }
    printf("The factorial of 5 is : %d\n", factorial);
    return 0;
}

/* Breakdown of Your Code


Variable Declaration:

int factorial = 1; initializes the variable factorial to 1. This will hold the result of the factorial calculation.
int i = 5; initializes the loop variable i to 5, which is the number for which we want to calculate the factorial.



While Loop:

The condition while (i >= 1) ensures that the loop continues as long as i is greater than or equal to 1.
Inside the loop, factorial = factorial * i; multiplies the current value of i with factorial.
i--; decrements i by 1 in each iteration.



Output:

Finally, printf("The factorial of 5 is : %d\n", factorial); prints the result.



Expected Output
When you run this program, it will calculate the factorial of 5:
5!=5×4×3×2×1=120
5! = 5 \times 4 \times 3 \times 2 \times 1 = 120 5!=5×4×3×2×1=120
So, the output will be:
The factorial of 5 is : 120 */
