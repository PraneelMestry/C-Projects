#include <stdio.h>
#include <stdlib.h>
int main()
{
    long int a, b, sum, diff, prod, quotient, remainder, choice;
    printf("Welcome to Calculator!\n");
    printf("(P.S. ALL THE VALUES ENTERED MUST BE INTEGERS)\n");
    printf("Enter value of integer 1: ");
    scanf("%ld", &a);
    printf("Enter value of integer 2: ");
    scanf("%ld", &b);
    while(1)
    {
        printf("\n ======= MENU-DRIVEN CALCULATOR =======\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Mutiply\n");
        printf("4) Divide(Remainder)\n");
        printf("5) Divide(Quotient)\n");
        printf("6) Exit\n");
        printf("Enter your choice: \n");
        scanf("%ld", &choice);
        switch (choice)
        {
            case 1: sum = a + b;
            printf("Sum = %ld\n", sum);
            break;
            case 2: diff = a - b;
            printf("Difference = %ld\n", diff);
            break;
            case 3: prod = a * b;
            printf("Product = %ld\n", prod);
            break;
            case 4: remainder = a % b;
            printf("Remainder = %ld\n", remainder);
            break;
            case 5: quotient = a / b;
            printf("Quotient = %ld\n", quotient);
            break;
            case 6: printf("\nExiting Calculator.....\n");
            printf("Successfully Exited!\n");
            break;
            default: printf("Invalid Choice!\n");
            break;
        }
        if(choice == 6)
        {
            break;
        }
    }
    return 0;
}
