#include <stdio.h>
/* Step 2: Declare Different Array Types
Create these 4 arrays inside your main function:

An int array with 5 elements (your choice of numbers)
A char array with 3 elements (your choice of letters)
A float array with 4 elements (your choice of decimal numbers)
A double array with 2 elements (your choice of large decimal numbers)

Step 3: Test Basic Data Type Sizes
Use printf to show:

sizeof(int)
sizeof(char)
sizeof(float)
sizeof(double)

Step 4: Test Each Array - The 3 Key Measurements
For EACH of your 4 arrays, print:

Total memory: sizeof(array_name)
Size of one element: sizeof(array_name[0])
Number of elements: sizeof(array_name) / sizeof(array_name[0])

Step 5: Verify Your Understanding
Before you code, predict what each sizeof will return for your arrays! */
int main() 
{
    int arr1[] = {12, 77, 43 ,21};
    char arr2[] = {'S', 'S', 'W', 'Q', 'D'};
    float arr3[] = {23.1, 43.23, 3.00, 3.141};
    double arr4[] = {12.234567, 12.123432, 334.56654323456789098765432};
    
    // Test Basic data type sizes;Use printf to show ; sizeeof(int) sizeof(char), sizeof(float), sizeof(double) Test Basic Data Type Sizes 
    printf("the size of allocated memory by an integer data type : %zu bytes\n", sizeof(arr1[0]));
    printf("the size of allocated memory by a character data type : %zu bytes\n", sizeof(arr2[0]));
    printf("the size of allocated memory by a float data type : %zu bytes\n", sizeof(arr3[0]));
    printf("the size of allocated memory by a double data type : %zu bytes\n\n", sizeof(arr4[0]));
   // For EACH of your 4 arrays, print:
   //Total memory: sizeof(array_name);Size of one element: sizeof(array_name[0]);Number of elements: sizeof(array_name) / sizeof(array_name[0])
    printf("the size of total allocated memory by arr1 : %zu bytes\n", sizeof(arr1));
    printf("the size of allocated memory by one element in arr1 : %zu bytes\n", sizeof(arr1[0]));
    printf("the number of elements inserted in arr1 : %zu elements\n\n", sizeof(arr1) / sizeof(arr1[0]));
    
    printf("the size of total allocated memory by arr2 : %zu bytes\n", sizeof(arr2));
    printf("the size of allocated memory by one element in arr2 : %zu bytes\n", sizeof(arr2[0]));
    printf("the number of elements inserted in arr2 : %zu elements\n\n", sizeof(arr2) / sizeof(arr2[0]));
    
    printf("the size of total allocated memory by arr3 : %zu bytes\n", sizeof(arr3));
    printf("the size of allocated memory by one element in arr3 : %zu bytes\n", sizeof(arr3[0]));
    printf("the number of elements inserted in arr3 : %zu elements\n\n", sizeof(arr3) / sizeof(arr3[0]));
    
    printf("the size of total allocated memory by arr4 : %zu bytes\n", sizeof(arr4));
    printf("the size of allocated memory by one element in arr4 : %zu bytes\n", sizeof(arr4[0]));
    printf("the number of elements inserted in arr4 : %zu elements\n\n", sizeof(arr4) / sizeof(arr4[0]));
    return 0;
}
