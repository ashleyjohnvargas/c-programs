#include <stdio.h>

int main()
{
	int k, num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	k=1;
	while (k<num)
	{
		printf("%dX", k);
		k++;
	}
	printf("%d", k);
	return 0;
}



