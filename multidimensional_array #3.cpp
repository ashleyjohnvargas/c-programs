#include <stdio.h>
#define MAX_SIZE 50
int main() {
    int i, j, size;
    int arr[MAX_SIZE];
    printf("Input number of elements in the array: ");
    scanf("%d", &size);
    //Input array values
    printf("\nInput array values: \n");
    for (i=0; i<size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    //Display the list
    printf("\nThe values of the array are: ");
    for (i=0; i<size; i++)
        printf("%d ", arr[i]);
    //Input the number to be searched
    int num;
    printf("\nInput the number to be searched: ");
    scanf("%d", &num);
    //Check if the number is in the list then count its frequency
    int frequency = 0;
    for (i=0; i<size; i++) {
        if (arr[i] == num)
            frequency++;
    }
    if (frequency > 0) {
        printf("\nThe number %d is in the list", num);
        printf("\nIt occured %d time/s", frequency);
    }
    else {
        printf("\nThe number %d is not in the list", num);
    }
    return 0;
}


