#include <stdio.h>
#include <conio.h>

int main()
{
	int i, temp, noex;
	int arr[10];
	printf("Enter the 10 elements of the array: \n");
	for (i=0; i<10; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nThe values of the array are: ");
	for (i=0; i<10; i++) 
		printf("%d ", arr[i]);
		
	do {
		noex = 0;
		for (i=0; i<9; i++) {
			if (arr[i] > arr[i+1]) {
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				noex = 1;
			}
		}
		
	}
	while (noex);
	printf("\n\nThe highest value in the array is %d", arr[9]);
	printf("\nThe lowest value in the array is %d", arr[0]);
		
	getch();
	return 0;
}



