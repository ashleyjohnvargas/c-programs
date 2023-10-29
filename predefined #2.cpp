#include <stdio.h>
#include <math.h>

int main() {
	int i;
	float num;
	printf("Input the number: ");
	scanf("%f", &num);
	printf("\n%9s %.0f\n", "Base", num);
	printf("POWER     RESULT");
	//for loop to display the power and the result
	for (i=0; i<=10; i++)
		printf("\n%3d         %.0f", i, pow(num, i));
		
	return 0;
}



