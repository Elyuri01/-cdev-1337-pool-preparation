#include <stdio.h>

/* Write a program that adds the numbers from 1 to 10 using a loop, and
 displays the result */

int main() {
	int sum = 0;
	int i = 1;

	while (i <= 10) {
		sum = sum + i;
		i++;
	}
	printf("The sum is : %d\n", sum);
	return 0;
}
	
				
/* Explanation of Your Code


Initialization:

int sum = 0; initializes the variable sum to hold the total sum.
int i = 1; initializes the loop variable i to start from 1.



While Loop:

The condition while (i <= 10) ensures that the loop will continue as long as i is less than or equal to 10.
Inside the loop, sum = sum + i; adds the current value of i to sum.
i++; increments i by 1 after each iteration.



Output:

After the loop finishes, printf("The sum is : %d\n", sum); prints the final value of sum.



Expected Output
When you run this program, it will calculate the sum of the numbers from 1 to 10, which is:
1+2+3+4+5+6+7+8+9+10=551 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 551+2+3+4+5+6+7+8+9+10=55
So, the output will be:
The sum is : 55 */

