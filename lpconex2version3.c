#include <stdio.h>

/* how would you modify the program to sum only even numbers from 1 to the user-specified number? What changes would you make? */

int main() {
	int sum = 0;
	int i = 1;
	int f;

	printf("Enter the number that you want to stop summing after it(the summing starts from 1) : ");
	scanf("%d", &f);

	while (i <= f) {
		
		if (i % 2 == 0) {
			sum = sum + i;
		}
		i++;
	}
	printf("The sum of the numbers from 1 to %d is : %d\n", f, sum);
	return 0;
}

/* Breakdown of Your Code


Variable Declarations:

int sum = 0; initializes the variable to hold the total sum of even numbers.
int i = 1; initializes the loop variable to start from 1.
int f; is used to store the user-specified upper limit.



User Input:

The program prompts the user to enter a number and reads it using scanf.



While Loop:

The loop continues as long as i is less than or equal to f.
Inside the loop, the condition if (i % 2 == 0) checks if i is even. If it is, the current value of i is added to sum.



Output:

Finally, the program prints the total sum of even numbers from 1 to the user-specified number.



Expected Output
Now, let’s consider an example. If a user enters the number 10, the program will calculate the sum of the even numbers from 1 to 10:
2+4+6+8+10=30
2 + 4 + 6 + 8 + 10 = 30 2+4+6+8+10=30
So, the output of the program will be:
The sum of the numbers from 1 to 10 is : 30 */
