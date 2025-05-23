# include <stdio.h>

//a program that asks the user for the price of a product and the quantity sold, then displays the total revenue.

int main() 
{
   float price;
   float sales;

   printf("What is the price of your product?\n");
   scanf("%f", &price);
   printf("What is the quantity that you sold from this product?\n"); 
   scanf("%f", &sales);
   printf("Your total revenue is %.2f\n", sales * price);

   return 0;

}

