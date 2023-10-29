#include <stdio.h>

int gcd(int x, int y) {
	int i, min, max, gcf;
	if (x > y) {
		min = y; //to get the lower number
		max = x; //to get the higher number
	}
	if (x < y) {
		min = x; //to get the lower number
		max = y; //to get the higher number
	}
	//if max is not divisible by the min number,
	//then the gcf is found below the min number
	if (max%min != 0) {
		for (i=min-1; i>0; i--) {
			if ((x%i == 0) && (y%i == 0)) {
				gcf = i;
				return gcf;
			}				
		}
	}
	//if max is divisible by min number,
	//then min is the gcf or gcd
	else if (max%min == 0) {
		gcf = min;
		return gcf;
	}	
}

int main() {
	int num1, num2;
	printf("Input first number: ");
	scanf("%d", &num1);
	printf("Input second number: ");
	scanf("%d", &num2);	
	
	while ((num1 != 0) && (num2 != 0)) {
		printf("\nGCD of %d and %d is %d\n\n", num1, num2, gcd(num1, num2));
		printf("Input first number: ");
		scanf("%d", &num1);
		printf("Input second number: ");
		scanf("%d", &num2);	
	}			
	printf("\nEnd of program");
	
	return 0;
}




