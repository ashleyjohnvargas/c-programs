#include <stdio.h>
#include <conio.h>

main()
{
	float hw,hpr;
	printf("Enter the number of hours you worked in a week:  ");
	scanf("%f", &hw);
	printf("Enter your hourly pay rate: ");
	scanf("%f", &hpr);
	
	if (hw > 40 )
		printf("Your week's wage is %0.2f", 40 * hpr + (hw - 40) * (hpr * 3 / 2));
	else
		printf("Your week's wage is %0.2f", hw * hpr);
		
	getch();
	return 0;		
}




