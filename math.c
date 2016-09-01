/* A Simple math program */

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int number1;
    int number2;
    char choice[20] = "";
    int sum;
    int subtract;
    int multiply;
    int divide;
    int exp;

    printf("\nThis is a simple math program\n");

    while (strcmp(choice, "X") != 0 ){ /*While loop that operates until "X" is entered"*/
        printf("\nPlease choose from the following:\n");
        printf("\n1 = Addition\n2 = Subtraction\n3 = Multiply\n4 = Divide\n5 = Random Number\n'X' to exit");
        printf("\nSelection         -> ");
        scanf("%s", choice);

        if (strcmp(choice, "1") ==0 || strcmp(choice, "2") ==0 || strcmp(choice,"3") ==0 || strcmp(choice, "4") ==0){ /*if logic to determine if choice is valid.*/

            printf("\nEnter first number:  ");
            scanf("%d", &number1);

            printf("Enter second number: ");
            scanf("%d", &number2);

                if (strcmp (choice, "1") ==0 ){
                    sum = number1 + number2;
                    printf("\n%d + %d = %d\n", number1, number2, sum);
                } else if (strcmp (choice, "2") == 0 ){
                    subtract = number1 - number2;
                    printf("\n%d - %d = %d\n", number1, number2, subtract);
                } else if (strcmp (choice, "3") == 0){
                    multiply = number1 * number2;
                    printf("\n%d * %d = %d\n", number1, number2, multiply);
                } else if (strcmp (choice, "4") == 0){
                    divide = number1 / number2;
                    /*if (number1 % number2 != 0) {
                    printf("%d / %d = %d with a remainder of %i",number1, number2, divide, number1 % number2);
                    }else {*/
                    printf("\n%d / %d = %d\n", number1, number2, divide);
                } else if (strcmp (choice, "Exponent") ==0) {
                    exp = number1 *  number1;
                    printf(exp);
                }
             } else if (strcmp (choice, "5") ==0) {
                    printf("Random Number: ");  
                    printf("%d\n", rand() % 100);  
            } else if (strcmp (choice, "X") ==0 || strcmp(choice, "x") ==0){
                printf("\nExiting program\n");
                break;
            } else {  
                printf("\nIncorrect choice!\n");
            }

        }
        return 0;  
    }

