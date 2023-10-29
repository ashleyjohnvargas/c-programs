#include <stdio.h>

int main()
{
	int i, row;
	
	printf("Enter number of rows: ");
	scanf("%d", &row);
	
	i=1;
	while (i<=row)
	{
		if (i == 1)
			printf("*   *\n");
		if (i == 2)
			printf(" * * \n");
		if (i > 2)
			printf("  *  \n");
		i++;	
	}
	
	return 0;
}


