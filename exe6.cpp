#include <stdio.h>
#include <conio.h>

main()
{
    char operation;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    
    float num1, num2;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    
 
    switch(operation)
    {
        case '+' : printf("%0.2f + %0.2f is %0.2f", num1, num2, num1 + num2); break;
        case '-' : printf("%0.2f - %0.2f is %0.2f", num1, num2, num1 - num2); break;
        case '*' : printf("%0.2f * %0.2f is %0.2f", num1, num2, num1 * num2); break;
        case '/' : printf("%0.2f / %0.2f is %0.2f", num1, num2, num1 / num2); break;
        default : printf("Invalid operator"); 
    }
    getch();
    return 0;
}



