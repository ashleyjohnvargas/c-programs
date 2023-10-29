#include <stdio.h>

int main()
{
	int i, row;
	
	printf("Enter number of rows: ");
	scanf("%d", &row);
	
	for (i=1; i<=row; i++)
	{
		if (i == 1)
			printf("*   *\n");
		if (i == 2)
			printf(" * * \n");
		if (i > 2)
			printf("  *  \n");		
	}
	
	return 0;
}




