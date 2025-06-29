#include <stdio.h>
//💻 Code mini example: int arr[3];int i = 0;while (i < 3) {scanf("%d", &arr[i]) i++;}
/* so this example asks me to declare an array that can hold the value of 3 integers and to declare an integer of 0 as an initial value
  (it represents the number of the array so that it can store a number in each 'locker' that is why we assigned 0 as a value to it since the array
  count start from 0 its like that the first 'locker' name is arr[0] and we call it by that if we wanna store something in it..)
 then to 'keep'(while looping) reading the users input for 3 times until all the places in the array are filled so it basically ask a number from
the user and store it in the first array then asks him for another number then it stores it in the next array and so on until the 3  places in the 
declared array are filled that is why we increment by 1 because means a place or 'locker' so we go to the next 'locker' in the array
not literally increment a number*/
//🧪 Practice: print the numbers back using another while
int main() {
	int arr[3];    //array that holds 3 integers
	int i = 0;     //represents the array that we will store an integer in each place in the array
	while (i <= 3) { 
		scanf("%d", &arr[i]);
		i++;
	}
	i = 0;       //resets the array locker back to 0 (back to the first locker)
	//🧪 Practice: print the numbers back using another while
	while (i <= 3) {
		printf("%d\n", arr[i]);
		i++;
	}
        return 0;
}       
    /*Using i <= 3 will:

❗ Cause undefined behavior

💣 Potentially crash your program

🧪 Worst case: your code will “seem to work” — but silently corrupt memory (the hardest kind of bug)

And in the pool, memory errors = failure. */

/* int arr[3];      // We create 3 "lockers" for integers
int i = 0;       // Start at locker 0

while (i < 3) {  // While there are still empty lockers
    scanf("%d", &arr[i]);  // Fill the current locker with user input
    i++;                  // Move to the next locker
}
*/

	    


