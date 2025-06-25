
#include <stdio.h>

/* Check if a number is "strong" (a strong number = sum of the factorials of its digits
equals the number itself).
Example: 145 = 1! + 4! + 5! (1 + 24 + 120 = 145 */

int main() {
    //declare variables
    int number;
    int factorial;
    int digit;
    int alldigits = 0;
    //prompt the user and handle the input
    printf("Enter a whole number: ");
    if ((scanf("%d", &number)) != 1) {
            printf("Invalid input !You didnt enter a number\n");
            return 1;
    }
    
    //The process to get the right output(loop:extract each digit and calculate its factorial..)
    int numcopy = number;
    while (numcopy > 0) {
            	    
            digit = numcopy % 10;	    //extract the last digit of the entire number of the user
	    factorial = 1;                  //Inside the loop set the factorial value to 1 each time we calculate the factorial of a new digit
	    while (digit > 0) {                     //calculate the factorial of the digit
		    factorial = factorial * digit;   
		    digit--;
	    }
            alldigits = alldigits + factorial;       //add the first calculated factorial to the next factorials(when the loop will repeat)
            numcopy = numcopy / 10;                  //move to the next digit ...
    }
    if (alldigits == number && number != 0) {
            printf("%d is a strong number\n", number);
    }
    else {
            printf("%d is not a strong number\n", number);
    }
    return 0;
}
