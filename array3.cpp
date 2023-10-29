#include <stdio.h>

int main()
{
	int i, j, mark = 1, sum;
	int arr1[10], arr2[5], arr3[10];
	printf("Enter the 10 elements of Set A: \n");
	for (i=0; i<10; i++) {
		printf("setA[%d] = ", i);
		scanf("%d", &arr1[i]);
	}
	printf("\nEnter the 5 elements of Set B: \n");
	for (i=0; i<5; i++) {
		printf("setB[%d] = ", i);
		scanf("%d", &arr2[i]);
	}
	printf("\n\nThe values of Set A are: ");
	for (i=0; i<10; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\nThe values of Set B are: ");
	for (i=0; i<5; i++) {
		printf("%d ", arr2[i]);
	}
	
	for (i=0; i<5; i++) {
		sum = 0;
		for (j=0; j<10; j++) {
			if (arr2[i] == arr1[j]) {
				arr3[j] = mark;
				mark++;
			}
			else 
				arr3[j] = 0;
		}
		for (j=0; j<10; j++) {
			sum = sum + arr3[j];
		}
		if (sum == 0) 
			goto jump;
			
		else
			mark = 1;
	}
	if (sum > 0) {
		printf("\n\nSet B is a subset of Set A");
	}
	if (sum <= 0) {
		jump:
			printf("\n\nSet B is not a subset of Set A");
	}								
	return 0;
}




