 # include <stdio.h>

// Write a program that asks the user for their year of birth and displays their age (assume the current year is 2025).

int main()
{
   int birth;
   int year = 2025;
   
   printf("What is your year of birth?\n");
   scanf("%d", &birth);
   printf("Your age is %d\n", year - birth);
   
   return 0;
   
}   
