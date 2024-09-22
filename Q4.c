// c program for a simple calculator with builtin functions
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int choice, num1, num2;
    float result;
    char operation[10];
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exponentiation\n");
    printf("6. Square Root\n");
    printf("7. Exit\n");

    printf("Enter your choice(1 - 7): ");
    scanf("%d", &choice);

   printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
        return num1 + num2;
        break;

        case 2:
        return num1 - num2;
        break;

        case 3:
        return num1 * num2;
        break;

        case 4:
        if (num2 != 0)
        return num1 / num2;
        else
        printf("Error! Division by zero is not allowed.");
        break;

        case 5:
        return pow(num1, num2);
        break;

        case 6:
        if (num1 >= 0)
        return sqrt(num1);
        break;
        
        case 7:
        return 0;
        break;
        
        default:
        printf(" Enter a valid choice");
        break;
    }
    
    return 0;
}