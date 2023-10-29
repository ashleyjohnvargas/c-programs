#include <stdio.h>

int main()
{
	int day, miles, rate;
	rate = 20; miles = 50;
	printf("   Day        Rate      Miles\n\n");
	while (miles < 200)
	{
		day++;
		miles = (miles + rate) - 2;
		printf("  %3d         %3d        %3d\n", day, rate, miles);
		rate = rate - 1;
	}
	if (day < 13)
		printf("\n\nBareng reached civilization on the %dth day", day);
	else
		printf("\n\nBareng died on the %dth day", day);
	
	return 0;
}




