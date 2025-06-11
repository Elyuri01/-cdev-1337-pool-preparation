#include <stdio.h>
#include <stdio.h>

/* Exercise 7 Advanced Challenge: Palindrome Detective
Your Mission: Modify your reversal program to check if a number is a palindrome (reads the same forwards and backwards).
Examples:121 → reversed is 121 → Palindrome!
1234 → reversed is 4321 → Not a palindrome
12321 → reversed is 12321 → Palindrome! */

int main() {
    //declare necessary variables
    int number;
    int reversed = 0;
    //Handle the input
    printf("Enter a number(Whole number with 2 digits at least): ");
    if ((scanf("%d", &number)) != 1) {
            printf("Invalid input!You have not entered a number.\n");
            return 1;
    }
    else if (number / 10 == 0) {
            printf("Error!Your number should have at least 2 digits.\n");
            return 1;
    }
    int numreversal = number;
    //loop[the Process to the solution: reverse the number]
    while (numreversal > 0) {
            reversed = reversed * 10 + numreversal % 10;
            numreversal = numreversal / 10;
    }
    //Output flow
    if (reversed == number) {
            printf("%d reversed is %d so your number is a palindrome\n", number, reversed);
    }
    else if (reversed != number) {
            printf("%d is not a palindrome(because %d reversed is %d so they are not equal)\n", number, number, reversed);
    }
    return 0;
}

/* I learned from this ex :
Number reversal algorithms
Input validation and error handling
Variable preservation strategies
Comparison logic
Professional code structure */
     





     
          
