#include <stdio.h>
#include <conio.h>

main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	
	if ((year%4 == 0) && (year%100 == 0) && (year%400 == 0))
		printf("%d is a Leap Year!", year);	
	else if ((year%4 == 0) && (year%100 > 1))
		  printf("%d is a Leap Year!", year);
		 else 
		  printf("%d is not a Leap Year!", year);	

		
		
	getch();
	return 0;
		
}


/*	if ((year%4 == 0) && (year%100 > 1))
		printf("%d is a Leap Year!", year);
	
	in that code above, there is a lot of years that are qualified to it like 2020,
	2016, 2012, 2008, 2004, 1996 etc...
	
	HOWEVER
		if ((year%4 == 0) && (year%100 == 0) && (year%400 == 0))
		printf("%d is a Leap Year!", year);
		
		in the code above, there is one specific year that is evenly divisible by 100 but since
		it is divisible by 400, it is considered as leap year. that is 2000.
		if you divide it by 100, it will give you an even quotient. but because of the fact that
		it is divisible by 400, it is still considered as leap year.	
		*/

