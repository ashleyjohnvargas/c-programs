#include <stdio.h>

int main()
{
	int i, temp, noex;
	int arr1[5], arr2[5], arr3[10];
	//INPUT VALUES
	printf("Enter 5 values of Array 1: \n");
	for (i=0; i<5; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr1[i]);
		arr3[i] = arr1[i];
	}
	printf("\nEnter 5 values of Array 2: \n");
	for (i=0; i<5; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr2[i]);
		arr3[i+5] = arr2[i];
	}
	//DISPLAY VALUES
	printf("\n\nThe values of Array 1 are: ");
	for (i=0; i<5; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\nThe values of Array 2 are: ");
	for (i=0; i<5; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\nThe values of the Merged Array are: ");
	for (i=0; i<10; i++) {
		printf("%d ", arr3[i]);
	}
	//SORT ARRAY 1
	do {
		noex = 0;
		for (i=0; i<4; i++) {
			if (arr1[i] > arr1[i+1]) {
				temp = arr1[i];
				arr1[i] = arr1[i+1];
				arr1[i+1] = temp;
				noex = 1;
			}
		}
	}
	while (noex);
	//SORT ARRAY 2
	do {
		noex = 0;
		for (i=0; i<4; i++) {
			if (arr2[i] > arr2[i+1]) {
				temp = arr2[i];
				arr2[i] = arr2[i+1];
				arr2[i+1] = temp;
				noex = 1;
			}
		}
	}
	while (noex);
	//SORT MERGED ARRAY
	do {
		noex = 0;
		for (i=0; i<9; i++) {
			if (arr3[i] > arr3[i+1]) {
				temp = arr3[i];
				arr3[i] = arr3[i+1];
				arr3[i+1] = temp;
				noex = 1;
			}
		}
	}
	while (noex);
	//Display sorted 
	printf("\n\nThe sorted values of Array 1 are: ");
	for (i=0; i<5; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\nThe sorted values of Array 2 are: ");
	for (i=0; i<5; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\nThe sorted values of Merged Array are: ");
	for (i=0; i<10; i++) {
		printf("%d ", arr3[i]);
	}	
	return 0;
}
