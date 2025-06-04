#include <stdio.h>

/* Modify your password verification program to limit the number of attempts to enter the password to 3.
If the user fails to enter the correct password after 3 attempts, display "Access denied. Too many attempts." and exit the program.
If the user enters the correct password at any point, display "Access authorized" and exit the loop. */

int main() {
    int i;
    int password = 444477;
    int attempts = 0;
     
    while ( attempts < 3) {
	    
	    printf("Enter the password(the password is whole numbers only[INTEGERS] : ");
	    if ((scanf("%d", &i)) != 1) {
			    printf("Invalid input! Integers only.\n");
			    while (getchar() != '\n') { 
			           continue;
				   }
	    } 
	    else if (i == password) {
                    printf("Access authorized\n");
		    return 0;
		    } 
            else if (i != password) {
		    printf("Access denied\n");
    	            attempts++;
            }
    }
    
    printf("Access denied. Too many attempts.\n");
    return 0; 
}

/* 
   */				   
				  
				   
