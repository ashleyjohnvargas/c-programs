#include <stdio.h>
#define ROWS 5
#define COLS 5
int main() {
    int i, j;
    int arr[ROWS][COLS]; //declare two-dimensional array since 5 X 5
    //Input the values of the array and store them
    printf("Input array values: \n");
    for (i=0; i<ROWS; i++) {
        for (j=0; j<COLS; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n"); //new line after inputting elements in first row
    }
    //Display the 5 X 5 array
    //Change negative values to zero values
    printf("\nThe original values of the array are: \n");
    for (i=0; i<ROWS; i++) {
        for (j=0; j<COLS; j++) {
            printf("%d ", arr[i][j]);
            if (arr[i][j] < 0)
                arr[i][j] = 0;
        }    
        printf("\n");    
    }
    //Display the new array values
    printf("\nThe changed array is: \n");
    for (i=0; i<ROWS; i++) {
        for (j=0; j<COLS; j++)
            printf("%d ", arr[i][j]);
        printf("\n");    
    }

    return 0;
}


