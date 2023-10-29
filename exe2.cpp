#include <stdio.h>
#include <conio.h>

main()
{
	float hw,hpr;
	printf("Enter the number of hours you worked in a week:  ");
	scanf("%f", &hw);
	printf("Enter your hourly pay rate: ");
	scanf("%f", &hpr);
	
	switch((int)hw)
	{	case 0 ... 40 : printf("You week's wage is %0.2f", hw * hpr); break;
		//assuming the max number of working hours per week is 80 hours
		case 41 ... 80 : printf("Your week's wage is %0.2f", 40 * hpr + (hw - 40) * (hpr * 3 / 2)); break;
		default : printf("Input error");
	 } 
	 getch();
	 return 0;
}
