#include <stdio.h>
#define ROWS 5
#define COLS 5
int i, j, sum = 0, equal = 0;  //declare variables
int arr[ROWS][COLS];  //declare 2-dimensional array that is 5 X 5
int rowSum[ROWS], columnSum[COLS];  //declare arrays that will store the sum per row and per column
void out_matrix(), get_rowSum(), get_columnSum(), out_rowSum(), out_columnSum(), isrowsum_equal(), iscolumnsum_equal();  //declare void functions
int main() {	
	//Input the values of the array
	printf("Input array values:\n");
	for (i=0; i<ROWS; i++) {
		printf("\nRow %d\n", i+1);
		for (j=0; j<COLS; j++) {
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}	
	}
	out_matrix();        //function that displays the 5 X 5 array
	get_rowSum();        //function that stores sum of each row in row array
	get_columnSum();     //function that stores sum of each column in column array
	out_rowSum();        //function that displays the sum of each row
	out_columnSum();     //function that displays the sum of each column
	isrowsum_equal();    //function that displays whether the row sums are equal or not
	iscolumnsum_equal();  //function that displays whether the column sums are equal or not
	return 0;
}
//function that displays the 5 X 5 array
void out_matrix() {
	printf("\nThe 5 X 5 array: \n\n");
	for (i=0; i<ROWS; i++) {
		for (j=0; j<COLS; j++)
			printf("%d  ", arr[i][j]);
		printf("\n");	
	}
}

//function that stores the sum of each row in row sum array
void get_rowSum() {
	for (i=0; i<ROWS; i++) {
		for (j=0; j<COLS; j++) 
			sum = sum + arr[i][j];   //sum variable stores the total sum of each row
		rowSum[i] = sum;
		sum = 0;	
	}
}

//function that stores the sum of each column in column sum array
void get_columnSum() {
	for (i=0; i<ROWS; i++) {
		for (j=0; j<COLS; j++)
			sum = sum + arr[j][i];
		columnSum[i] = sum;
		sum = 0;	
	}
}

//function that displays the sum of each row
void out_rowSum() {
	printf("\nThe Sum of Rows:\n");
	for (i=0; i<ROWS; i++)
		printf("\nRow %d = %d", i+1, rowSum[i]);
}

//function that displays the sum of each row
void out_columnSum() {
	printf("\n\nThe Sum of Columns:\n");
	for (i=0; i<COLS; i++)
		printf("\nColumn %d = %d", i+1, columnSum[i]); 
}

//function that determines whether row sums are equal or not
void isrowsum_equal() {
	for (i=0; i<ROWS; i++) {
		if (rowSum[i] == rowSum[i+1])
			equal++;			
	}
	//printf("\n\nROWS = %d\nequal = %d", ROWS, equal);  //this serves as evidence for the value of equal and ROWS variables
	if (equal == ROWS-1)
		printf("\n\nRow sums are equal.");
	else
		printf("\n\nRow sums are not equal.");			
}

//function that determines whether column sums are equal or not
void iscolumnsum_equal() {
	equal = 0;
	for (i=0; i<COLS; i++) {
		if (columnSum[i] == columnSum[i+1])
			equal++;			
	}
	//printf("\n\nCOLS = %d\nequal = %d", COLS, equal);  //this serves as evidence for the value of equal and COLS variables
	if (equal == COLS-1)
		printf("\nColumn sums are equal.");
	else
		printf("\nColumn sums are not equal.");
}









