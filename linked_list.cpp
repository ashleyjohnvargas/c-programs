#include <stdio.h>
#include <malloc.h>

struct node {
	int x;
	struct node *next;
};

struct node *head, *curr, *tail;

int main() {
	int size, i, j, temp;		
	head = curr = tail = NULL; 
	//allocate a node
	curr = (struct node *) malloc(sizeof(struct node));
	//Enter value for x
	printf("Enter value for x: ");
	scanf("%d", &curr->x);
	if (curr->x != 0)
		size = 1;
	while (curr->x != 0) {
		if (head == NULL) {
			head = curr;
			head->next = NULL;
			tail = curr;
		}		
		else {
			tail->next = curr;
			curr->next = NULL;
			tail = curr;
		}
		curr = (struct node *) malloc(sizeof(struct node));
		
		printf("Enter value for x: ");
		scanf("%d", &curr->x);
		if (curr->x != 0)
			size++;
	}
	
	if (head == NULL) {
		printf("\nNo record/s entered!");
		goto end;
	}	
	
	//print the original linked list values
	printf("\nOriginal Linked List: ");
	curr = head;
	while (curr != NULL) {
		printf("%d ", curr->x);
		curr = curr->next;
	}	
	
	//sort linked list using balloon sort
	for (i=0; i<size-1; i++) {
		curr = head;
		tail = curr->next;
		for (j=0; j<size-i-1; j++) {
			if (curr->x < tail->x) {
				curr->x = curr->x;
				curr = tail;
				tail = curr->next;
			}
			else {
				temp = curr->x;
				curr->x = tail->x;
				tail->x = temp;
				curr = tail;
				tail = curr->next;
			}
		}
	}	
	
	//print sorted linked list values
	printf("\n\nSorted Linked List: ");
	curr = head;
	while (curr != NULL) {
		printf("%d ", curr->x);
		curr = curr->next;
	}	
		
end:	
	return 0;
}

