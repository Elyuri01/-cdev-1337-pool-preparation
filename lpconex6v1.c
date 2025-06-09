#include <stdio.h>
#include <math.h>

// Write a program that checks if a number entered by the user is prime (use loops and conditions).
/* use the loop to check for divisors of the number rather than itself or 1 (to do that we keep checking all the numbers from 2 to the 
square root of the number             */
int main() { 
    
   int number;
   int inprime = 1, i = 2;
   
   // Get input
   printf("Enter a prime number : ");   //prompt the user for input
   if ((scanf("%d", &number)) != 1 ) {
	   printf("Invalid input. Not a number\n");
           return 1;
   }
   else if (number < 2) { 
	   printf("%d is not a prime number\n", number);
	   return 0;
   }
   // Calculate limit
   int limit = (int)sqrt((double)number);
   // Loop to check divisors
   while (i <= limit) {

	   if (inprime == 1 && number % i == 0)  {
		   inprime = 0;
		   printf("%d is not a prime number\n", number);
	   } 
           ++i;
   } 
   // Final result
   if (inprime) {  
           printf("%d is a prime number\n", number);
   }
   
 
   return 0;
}

/* You've learned and implemented several key programming concepts:

Prime number logic - understanding what makes a number prime
Square root optimization - only checking up to √n for efficiency
Flag variables - using boolean-like variables to track state
Loop control - using while loops effectively
Conditional logic - making decisions based on conditions
Input/output - getting user input and displaying results */
