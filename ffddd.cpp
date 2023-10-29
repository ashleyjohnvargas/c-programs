#include <stdio.h>

int main() {
	int x, y;
	printf("Enter value for x: ");
	scanf("%d", &x);
	printf("Enter value for y: ");
	scanf("%d", &y);
	
	printf("\n x = %d", x);
	printf("\n y = %d", y);
	printf("\nSum = %d", x + y);
	printf("\nProd = %d", x * y);
	
	return 0;
}

