#include <stdio.h>

/*Write a C program that asks the user for their age. If the age is 18 or above, the program should
 print "You are eligible to vote." Otherwise, it should print "You are not eligible to vote." (btw i added my touch to the exercice)*/

int main()  {
    
    int age;

    printf("What is your age ? : ");
    scanf("%d", &age);
    if (age >= 18 && age <= 150) {
	    printf("You are eligible to vote\n");	    
    }
    else if (age > 150) {
	    printf("Logically you are dead !\nBut anyway you are eligible to vote\n");
    }
    else {
	    printf("You are not eligible to vote\n");
    }
    return 0;
}
