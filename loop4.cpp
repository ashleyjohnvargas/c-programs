#include <stdio.h>
#include <conio.h>

int main()
{
	int div, num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Factors of %d = ", num);
	
	for (div=1; div<=num; div++)
	{
		if (num % div == 0)
			printf("%d ", div);
	}		

	getch();
	return 0;
} 
 
 
 
