#include <stdio.h>
#include <conio.h>

int main()
{
	int div, num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Factors of %d = ", num);
	
	div=1;
	while (div<=num)
	{
		if (num % div == 0)
			printf("%d ", div);
		div++;	
	}

	getch();
	return 0;
 } 
 
 
 
