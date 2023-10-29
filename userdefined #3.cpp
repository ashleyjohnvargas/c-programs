#include <stdio.h>

int is_prime(int x) {
	int i, factor = 0;
	for (i=1; i<=x; i++) {
		if (x%i == 0)
			factor++;			
	}
	if (factor == 2)
		return 1;
	else
		return 0;	
}

int main() {
	int num;
	printf("Input the number: ");
	scanf("%d", &num);
	while (num != 0) {
		if (is_prime(num) == 1)
			printf("\n%d is a prime number", num);
		else if (is_prime(num) == 0)
				printf("\n%d is not a prime number", num);
		printf("\n\nInput the number: ");
		scanf("%d", &num);	
		if (num == 0)
			break;	
	}
	printf("\nEnd of program");
				
	return 0;
}


