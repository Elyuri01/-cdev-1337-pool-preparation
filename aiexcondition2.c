#include  <stdio.h>

/* Write a C program that prompts the user to enter an integer. The program should determine if the
 number is even or odd and display the result.*/

//int main() {

 //   int i;
   // int innum = 0;
    //printf("Enter an integer number only (number with no decimal parts) : ");
  //  while ((i = getchar()) != EOF) {
//	    if (i == ' ' || i == '\n' || i == '\t') {
//		    innum = 0;
//	    }
//
//	    else if (innum == 0) {
//		    innum = 1;
//		    i == 1 || i == 3 || i == 5 || i == 7 || i == 9;
//	            printf("odd\n");
    //}
  //          else if (innum) {
//	            printf("even\n");
    //}
  //  }
//
  //  return 0;
//} 

int main() {

    int i;

    printf("Enter an integer : ");
    scanf("%d", &i);
    if (i % 2 == 1 || i % 2 == -1) {
	    printf("odd\n");
	}
    else {
            printf("even\n");
	}
}  
