#include <stdio.h>

int main()
{
	int i, num, temp, k = 0;
	printf("Enter the integer: ");
	scanf("%d", &num);
	temp = num;
	
	int arr[50];
	
	i=0;
	while (num > 0) {
		if (num%2 == 0)
			arr[i] = 0;
		else 
			arr[i] = 1;
		num = num / 2;
		if (num == 0)
			goto jump;		
		i++;	
	}
	
	jump:
		printf("\nDecimal = %d\n", temp);
		printf("Binary = ");
		for (i=i; i>=0; i--) {
			printf("%d ", arr[i]);
		}
	return 0;
}



