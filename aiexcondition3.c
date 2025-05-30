#include <stdio.h>

/* Write a C program that asks the user for a grade (0-100). The program should print:- "Excellent" if the grade is 90 or above,- "Good" if it is between 70 and 89,- "Average" if it is between 50 and 69,- and "Fail" if it is below 50 */

int main(void) {

    float g;
    printf("Enter a grade : ");
    if (scanf("%f", &g) != 1) {
	    printf("Invalid input\n");
	    return 1;
    }

    if (g > 100 || g < 0) {
	    printf("Error! The grade range is (0-100)\n");
    }
    else if (g >= 90) {
	    printf("Excellent\n");
    }
    else if (g >= 70 &&  g <= 89) {
	    printf("Good\n");
    }
    else if (g >= 50 && g <= 69) {
	    printf("Average\n");
    }
    else {
	    printf("Fail\n");
    }
    
    return 0;
}
		 
