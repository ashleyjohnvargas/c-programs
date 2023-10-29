#include <stdio.h>

struct quiz {       //child structure definition
	float quiz1;
	float quiz2;
	float quiz3;
};

struct student {      //mother structure definition
	char number[10];
	char name[15];
	struct quiz quiz;  //structure within a structure
};

struct student stud_rec[5];  //mother structure global declaration

int main() {
	int i, j;
	float sum;
	float sum_arr[5], col_sum[5];
	//input the values
	for (i=0; i<5; i++) {
		printf("\nInput student number: ");
		scanf("\n");
		gets(stud_rec[i].number);
		printf("Input student name: ");
		scanf("\n");
		gets(stud_rec[i].name);		
		//Input the quiz scores of the student
		printf("Score in Quiz 1: ");
		scanf("%f", &stud_rec[i].quiz.quiz1);
		sum = sum + stud_rec[i].quiz.quiz1;   //sum
		printf("Score in Quiz 2: ");
		scanf("%f", &stud_rec[i].quiz.quiz2);
		sum = sum + stud_rec[i].quiz.quiz2;   //sum
		printf("Score in Quiz 3: ");
		scanf("%f", &stud_rec[i].quiz.quiz3);
		sum = sum + stud_rec[i].quiz.quiz3;   //sum
		sum_arr[i] = sum;
		sum = 0;
	}
	
	//get the sum for each of the three quizzes
	for (i=0; i<3; i++) {
		sum = 0;
		if (i == 0) {
			for (j=0; j<5; j++)
				sum = sum + stud_rec[j].quiz.quiz1;
			col_sum[i] = sum;	
		}
		else if (i == 1) {
			for (j=0; j<5; j++)
				sum = sum + stud_rec[j].quiz.quiz2;
			col_sum[i] = sum;
		}
		else if (i == 2) {
			for (j=0; j<5; j++)
				sum = sum + stud_rec[j].quiz.quiz3;
			col_sum[i] = sum;
		}		
	}				
	//print the values
	printf("\n");
	printf("Student Number\tStudent Name\tQUIZ #1\t\tQUIZ #2\t\tQUIZ #3\t\tGrade Average\n");
	for (i=0; i<5; i++) {
		printf("%s\t%s\t\t%0.2f\t\t%0.2f\t\t%0.2f\t\t%0.2f\n", stud_rec[i].number, stud_rec[i].name, stud_rec[i].quiz.quiz1,
		stud_rec[i].quiz.quiz2, stud_rec[i].quiz.quiz3, sum_arr[i] / 3);		
	}	
	//get the average of grade average
	float grdAve_sum = 0;
	for (i=0; i<3; i++) {  //get the sum of all quiz average first
		grdAve_sum = grdAve_sum + col_sum[i] / 5;
	}
	//now, grdAve_sum contains the sum of all quiz average
	//display quiz average
	printf("AVERAGE\t\t\t\t%0.2f\t\t%0.2f\t\t%0.2f\t\t%0.2f", col_sum[0] / 5, col_sum[1] / 5, col_sum[2] / 5, grdAve_sum / 3);

	return 0;	
}
	
	
	
