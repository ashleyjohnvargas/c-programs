#include <stdio.h>
#include <string.h>
#define MAX_SIZE 50
int main() {
	char word[MAX_SIZE];
	char orig_word[MAX_SIZE];
	char rev_word[MAX_SIZE];
	int value;
	//Input the word
	printf("Input the word: ");
	scanf("%s", &word);
	strcpy(orig_word, word);  //store original word to another array
	strcpy(rev_word, strrev(word));  //store reverersed word to another array
	//display the original and reversed word
	printf("\nOriginal: %s", orig_word);
	printf("\nReversed: %s\n", rev_word);
	//compares whether the original and reversed words are equal or not regardless of case
	value = stricmp(orig_word, rev_word);  
	//printf("\nValue = %d", value);   //to check the value of stricmp
	if (value == 0) {
		value = 1;   //set value to 1 = true
		printf("\nValue = %d", value);
		printf("\n<input string> is a Palindrome");
	}
	else {
		value = 0;   //set value to 0 = false
		printf("\nValue = %d", value);
		printf("\n<input string> is Not a Palindrome");
	}
	return 0;
}


