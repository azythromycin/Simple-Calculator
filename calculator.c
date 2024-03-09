#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    char userChoice;
    double sum, difference, product, quotient, expResult, rootResult;

    printf("////////////////////////////////////////////////////Calculator////////////////////////////////////////////////////\n");

    while (userChoice != 'g')
    {
        printf("Please enter your first operand (the base in if calculating exponent or root): ");
        scanf(" %lf", &num1);
        printf("Please enter your second operand (the exponent in if calculating exponent or root): ");
        scanf(" %lf", &num2);
        printf("Here's what I am capable of: \n");
        printf("a) Addition \n");
        printf("b) Subtraction \n");
        printf("c) Multiplication \n");
        printf("d) Division \n");
        printf("e) Exponent \n");
        printf("f) Square Root \n");
        printf("g) exit \n");

        printf("Please enter your choice: ");
        scanf(" %c", &userChoice);

        switch (userChoice)
        {
        case 'a':
            sum = num1 + num2;
            printf("The sum of your numbers is: %lf\n", sum);
            break;
        case 'b':
            difference = num1 - num2;
            printf("The difference of your numbers is: %lf\n", difference);
            break;
        case 'c':
            product = num1 * num2;
            printf("The product of your numbers is: %lf\n", product);
            break;
        case 'd':
            if (num2 != 0)
            {
                quotient = num1 / num2;
                printf("The quotient of your numbers is: %lf\n", quotient);
            }
            else
            {
                printf("Invalid operation! Try again\n");
            }
            break;
        case 'e':
            expResult = pow(num1, num2);
            printf("The result of raising the first number to the power of the second is: %lf\n", expResult);
            break;
        case 'f':
            if (num2 != 0)
            {
                rootResult = pow(num1, 1.0 / num2);
                printf("The root of the first number to the base of the second is: %lf\n", rootResult);
            }
            else
            {
                printf("Cannot calculate the root with a divisor of zero.\n");
            }
            break;
        case 'g':
            printf("Thank you for using the calculator. Have a nice day.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}