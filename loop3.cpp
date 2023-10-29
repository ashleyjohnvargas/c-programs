#include <stdio.h>

int main()
{
	int k, num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	for (k=1; k<num; k++)
		printf("%dX", k);
	printf("%d", k);	
	
	return 0;
}


