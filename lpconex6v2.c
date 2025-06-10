#include <stdio.h>
#include <math.h>

/* Challenge: find and print ALL prime numbers between 1 and 50?
  This will require you to:
Use your prime-checking logic inside another loop
Think about code organization
Apply your understanding to a broader problem  */
int main() {
    int number = 2, i = 2, inprime = 1;            /*  number for printing prime numbers..and i for finding divisors of each number 
    					       and detect if prime.. inprime to signal if we are inside a prime number or not */
    
    while (number <= 50) {
	    inprime = 1;
	    i = 2;
	    double limit = (int)sqrt((double)number);       //calculates the squareroot of each number from 1 to 50
            while (i <= limit) { 
                    if (inprime == 1 && number % i == 0) {
                            inprime = 0;
                            break;
                    }
		    i++;
	    }
	     if (inprime) {
             printf("%d\n", number);
	     }
	     number++;
             
             
    }
    return 0;
}

/* Now that you understand this deeply, could you modify this algorithm to:

Count how many primes there are (instead of just printing them)?
Find primes in a different range (like 100 to 200)? 

int main() {
    int number = 2, i = 2, inprime = 1, primecount = 0;
    while (number <= 200) {
	    inprime = 1;
	    i = 2;
            double limit  = (int)sqrt((double)number);
	    while (i <= limit) {
		    if (inprime == 1 && number % i == 0) {
			    inprime = 0;
			    break;
		    }
		    i++;
	    }
	    if (inprime) {
		    primecount++;
	    }
	     number++;	     
    } 
    printf(" The number of prime numbers between 1 and 200 is :  %d\n",  primecount);
    return 0;
} */

