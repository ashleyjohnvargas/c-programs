#include <stdio.h>
#include <string.h>
#define MAX_SIZE 50

int is_palindrome(char *str) {
	int len, i;
	len = strlen(str);
	for (i=0; i<len; i++) {
		if (str[i] != str[len - i - 1])
			return 0;
	}
	return 1;
}

int main() {
	char word[MAX_SIZE];
	printf("Input the word: ");
	fgets(word, MAX_SIZE, stdin);
	word[strcspn(word, "\n")] = '\0';
	int value;
	value = is_palindrome(word);
	
	if (value == 1)
		printf("\n%s is a palindrome", word);
	else if (value == 0)
			printf("\n%s is not a palindrome", word);	
	
	return 0;	
}
