#include <stdio.h>
#include <conio.h>

main() 
{
    int num1,num2,num3;
    printf("Enter integer number: ");
    scanf("%d", &num1);
    printf("Enter integer number: ");
    scanf("%d", &num2);
    printf("Enter integer number: ");
    scanf("%d", &num3);
       
    if ((num1 < num2) && (num1 < num3))
        printf("\n%d is the smallest number.", num1);
    if ((num2 < num1) && (num2 < num3))
        printf("\n%d is the smallest number.", num2);
    if ((num3 < num1) && (num3 < num2))
        printf("\n%d is the smallest number.", num3);
        if ((num1 > num2) && (num1 > num3))
        printf("\n%d is the largest number.", num1);
    if ((num2 > num1) && (num2 > num3))
        printf("\n%d is the largest number.", num2);
    if ((num3 > num1) && (num3 > num2))
        printf("\n%d is the largest number.", num3);
    getch();
    return 0;
}



