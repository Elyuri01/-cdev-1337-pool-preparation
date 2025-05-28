// #include <stdio.h>
// /* a program that shows if a student is qualified for a faculty scholarship under two conditions if he live exactly
// 1000 meter away from the faculty and he doesnt live with his parents if true then scholarship is granted if not then no scholarship*/

// int main() {

// char distance [4];
// char home [3];

// printf("Do you live 1000m away from the faculty? (yes/no) :  ");
// fgets(distance, 4, stdin);
// printf("Do you live with your parents? (yes/no) :  ");
// fgets(home, 3 ,stdin);

// if (distance == "yes" && home == "no") {
//     printf("Scholarship granted\n");
// }
// else {
//     printf("no granted scholarship\n");
// }
// return 0;
// } 
#include <stdio.h>
/*program to check if a student is qualified for a scholarship(the conditions are to be over 18 and registered in the official website
[the user must print O if he is registered and N if not]*/

int main() {

    char age , registered;
    printf("Are you at leat 18 years old(type O if yes and N if no) ? : ");
    scanf(" %c", &age);
    printf("Are you registered in our official website?(type O if yes and N if no): ");
    scanf(" %c", &registered);

    if (age == 'O' && registered == 'O') {
        printf("qualified\n");
    }
    else {
        printf("not qualified\n");
    }
    return 0;
    
}