#include <stdio.h>
/* Modify your program so that it continuously prompts the user for the password until they enter the correct one.
If the user enters the correct password, display "Access authorized" and exit the loop.
If the user enters an incorrect password, display "Access denied" and prompt them to try again.*/

int main() {
	int i;
	int password = 1222;
	
/* The \n character is crucial because it indicates the end of the user’s input. By using getchar() in a loop until \n is encountered, you ensure that all characters (including invalid ones) are removed from the input buffer, allowing for a clean slate for the next input attempt.*/


	while (1) {                 // 1 checks the password after reading the input and does not rely  on the value of i ex:(i != password) 
		printf("Enter the password(the password is an integer[whole numbers only]) : ");
		if ((scanf("%d", &i)) != 1) {
			printf("Invalid input, not an integer.\n");		  
		       	while (getchar() != '\n') {	                  /* The second while loop is crucial for ensuring that the program can handle
									     invalid input gracefully and continue prompting 
					                                     the user without getting stuck in an infinite loop.*/
	                        continue;
			}
		}
			
		else if (i == password) {
			printf("Access authorized\n");
			break;
		}
		else if (i != password) {
			printf("Access denied\n");
		}
	}
	return 0;
}
/* Explanation of the Revised Code


Input Validation:

The line if (scanf("%d", &i) != 1) checks if the input is a valid integer. If it’s not, it prints an error message.



Clearing Invalid Input:

The while (getchar() != '\n'); loop discards any invalid input left in the buffer, ensuring that the next scanf call works correctly.



Infinite Loop:

The loop continues until the correct password is entered.



Password Check:

If the entered password matches the correct password, it prints "Access authorized" and breaks out of the loop. If it doesn’t match, it prints "Access denied".
*/
	

// comeback when you master this concept to specify what happens if user enters a character other than whole numbers ..
// CHANGE THE PASSWORD data type to hold strings ...
   
/* Write a program that asks the user to enter a password (e.g., "1234").
If the password is correct, display "Access authorized".
If the password is incorrect, display "Access denied".

#include <stdio.h>
int main() {
    int i;
    int password = 1222;
    printf ("Enter the password");
    scanf("%d", &i);
    if (i == password) {
          printf("Access authorized");
	  }
    else {
          printf("Access denied");
	  }
    return 0;
    } */
    


