#include <stdio.h>                                                                                                                                                                                                                        /*How you would modify this program to sum numbers from 1 to any number specified by the user? What changes would you  make ? */
int main() {
    int f;
    int i = 1;
    int sum = 0;

    printf("Enter the number you want to stop summing at(the range starts from 1) : ");
    scanf("%d", &f);

    while (i <= f) {
            sum = sum + i;
            i++;
    }
    printf("the sum of the numbers from 1 to %d is : %d\n", f, sum);
    return 0;
}

