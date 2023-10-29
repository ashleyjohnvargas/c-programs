#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct node
{
  struct node *prev;
  char letter;
  struct node *next;
};

struct node *head, *curr, *tail;

int main()
{
  int n, i;
  char word[50], rev_word[50];
  printf("Enter a word: ");
  scanf("%s", &word);
  n = strlen(word);
  head = curr = tail = NULL;
  curr = (struct node *)malloc(sizeof(struct node));
  for (i = 0; i < n; i++)
  {
    if (head == NULL)
    {
      head = curr;
      head->prev = NULL;
      head->letter = word[i];
      head->next = NULL;
      tail = curr;
    }
    else
    {
      tail->next = curr;
      curr->letter = word[i];
      curr->next = NULL;
      tail = curr;
    }
    curr = (struct node *)malloc(sizeof(struct node));
  }

  // try to print the word and the node
  /*printf("\nThe Word is %s\n", word);     //just to check if i stored the word into nodes
  curr = head;
  while (curr != NULL) {
    printf("%c", curr->letter);
    curr = curr->next;
  }*/

  // store the reversed node to another array
  curr = tail;
  while (curr != NULL)
  {
    rev_word[i] = curr->letter;
    curr = curr->prev;
  }
  // print reversed and orig word
  printf("\nOrig Word = %s", word);
  printf("\nReversed Word = ");
  for (i = 0; i < n; i++)
  {
    printf("%c", rev_word[i]);
  }
  return 0;
}
