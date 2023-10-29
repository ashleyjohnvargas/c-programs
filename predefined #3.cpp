#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20
int main() {
	char password[MAX_SIZE], orig_password[MAX_SIZE], hid_password[MAX_SIZE];
	char asterisk = '*';
	int i, tries = 3;
	printf("Input your original password: ");
	scanf("%s", &password);
	strcpy(orig_password, password);   //store the original password to another array
	strcpy(hid_password, strset(password, asterisk));  //store hidden password to another array
	//printf("\nYour original password: %s", orig_password);  //just to check if the variable did actually store the string
	printf("\nYour original password is %s", hid_password);
	char input_password[MAX_SIZE];
	char orig_input[MAX_SIZE];
	printf("\n\n-----Input your password again (max of 3 tries)-----\n");
	for (i=0; i<3; i++) {
		printf("\nInput your password: ");
		scanf("%s", &input_password);
		strcpy(orig_input, input_password);
		//printf("Input password is %s", orig_input); //just to check if the variable did actually store the string
		printf("\nInput password is %s", strset(input_password, asterisk));
		int value;
		value = strcmp(orig_input, orig_password);  //strcmp is used because password is case-sensitive
		if (value == 0) {
			printf("\nWelcome to PUP Quezon City!");
			break;
		}			
		else {
			tries--;
			if (tries > 0)
				printf("\nIncorrect password. You have %d tries left", tries);
			else if (tries == 0)
					printf("\nIntruder Alert!");
		}				
		printf("\n");					
	}	
	return 0;
}


