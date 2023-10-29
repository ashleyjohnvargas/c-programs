#include <stdio.h>

int main()
{
	int c, row, x;
	
	printf("Enter number of rows: ");
	scanf("%d", &row);
	
	for (c=1; c<=row; c++)
	{
		for (x=1; x<=c; x++)
			printf("*");
		printf("\n");	
	}
	
	return 0;
}



