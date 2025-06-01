#include <stdio.h>

/*  Ask the user to enter a number, then display "Positive" if the number > 0,
 "Negative" if < 0, or "Zero" if = 0 */

int main() {
      
    int i;

    printf("Enter a number : ");
    if (scanf("%d", &i) != 1) {
	    printf("Error! Invalid input\n");
    }
    else if (i > 0) {
	    printf("Positive\n");
    }
    else if (i < 0) {
	    printf("Negative\n");
    }
    else if (i == 0) {
	    printf("Zero\n");
    }
    return 0;
}


