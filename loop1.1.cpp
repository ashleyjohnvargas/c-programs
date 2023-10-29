#include <stdio.h>

int main()
{
	int c, row, x;
	
	printf("Enter number of rows: ");
	scanf("%d", &row);
	
	c=1;
	while (c<=row)
	{
		x=1; 
		while (x<=c)
		{
			printf("*");
			x++;
		}
		printf("\n");
		c++;
	}

	return 0;
}


