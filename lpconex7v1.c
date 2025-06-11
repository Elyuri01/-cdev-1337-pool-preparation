
#include <stdio.h>

//Reverse a number entered by the user (e.g., 1234 becomes 4321) using loops.[version 1]

/* int main() {
    int number;

    printf("Enter a whole  number(at least with 2 digits) : ");
    if ((scanf("%d", &number)) != 1) {
	 printf("Invalid input.Not a number\n");
         return 1;
    }
    else if (number / 10 == 0) {
	   printf("Error!Your number should have at least 2 digits\n");
	   return 1;
    } 
    //this method only reverse the digits doesnt build and independent reversed integer(see version 2)
    while (number > 0) {
	    printf("%d", number % 10);
	    number = number / 10;
    }
    return 0;
} */

//Reverse a number entered by the user (e.g., 1234 becomes 4321) using loops.[version 2]
int main() {
    int number;
    int reversed = 0;


    //Handle input
    printf("Enter a whole  number(at least with 2 digits) : ");
    if ((scanf("%d", &number)) != 1) {
         printf("Invalid input.Not a number\n");
         return 1;
    }
    else if (number / 10 == 0) {
           printf("Error!Your number should have at least 2 digits\n");
           return 1;
    }
    //loop(process to get to the output)
    while (number > 0) {
	    reversed = reversed * 10 + number % 10;
	    number = number / 10;
    }
    //Print the output
    printf("Your number reversed is : %d\n", reversed);
    return 0;
}
	    

	    





