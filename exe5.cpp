#include <stdio.h>
#include <conio.h>

main()
{
	int integer;
	printf("Enter an integer number: ");
	scanf("%d", &integer);
	
	if (integer == 0)
		printf("The number %d is ZERO!", integer);
	if (integer%2 == 1)
		printf("The number %d is an odd number!", integer);	
	if (((integer > 0) || (integer < 0)) && (integer%2 == 0))
		printf("The number %d is an even number!", integer);
			
	getch();
	return 0;	
}




