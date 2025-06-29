#include <stdio.h>
/*Version 1 with aid :Plan: Ask for how many numbers (max: 20)
Declare int arr[20]
Fill array with while and scanf
Add logic: Count evens (use %)
Find max and min
Use: while, if, %, comparison, counters */

int main() {
    int num;   //user number
    //input handling
    printf("The Number Stats program:\nEnter how many numbers you want to add(maximum : 20) : ");
    if ((scanf("%d", &num)) != 1) { 
	    printf("Error!Invalid input , not a number\n");
	    return 1;
    }
    else if (num > 20) {
	    printf("Error!Maximum number is 20\n");
	    return 1;
    }
    //declare the array  and other variables
    int arr[num];     //an array that holds as much integers as specified by the user
    int i = 0;       //the index count of array that stars from 0
    //Fill array with while and scanf
    printf("Enter your numbers , as in each number in a line: ");
    while (i < num) {
	    if ((scanf("%d", &arr[i])) != 1) { 
		    printf("Error!Invalid input , not a number\n");
                    return 1;
	    }
	    i++;
    }
    /* Add logic: Count evens (use %) / Find max and min */ 
    i = 0;   //reset the index
    int evencount = 0;		     //Count evens 
    while (i < num) {
	    if (arr[i] % 2 == 0) {
		    evencount++;      //increment the count if the number is even
	    }
	    i++;        //increment the index
    }
    // Find max and min
    i = 1;         //set index to 1 to avoid comparing arr[i] with itself(min, max) in the firt iteration that is why we done a seperate loop..
    int max = arr[0], min = arr[0];        //variables to find max and min
    while (i < num) {
	    if (arr[i] > max) {
		    max = arr[i];
	    }
	    else if (arr[i] < min) {
		    min = arr[i];
	    }
	    i++;
    }
    printf("Number stats :\nThere is %d even number in your list of given numbers\n", evencount);
    printf("The maximum number value between your numbers is: %d\n", max);
    printf("The minimum  number value between your numbers is: %d\n", min);
    return 0;
}    


