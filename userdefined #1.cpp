#include <stdio.h>

void factorial(int x) {
	int i, prod = 1;
	printf("\nThe factorial is: ");
	for (i=x; i>0; i--) {
		if (i == x)
			printf("%d", i);
		else
			printf(" X %d", i);	
		prod = prod * i;
	}
	printf(" = %d", prod);
}

int main() {
	int num;
	printf("Input the number: ");
	scanf("%d", &num);
	factorial(num);
	
	return 0;
}


