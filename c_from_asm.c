/*
   The source program main.asm uses two types of data structures:
   1) one data array
   2) two unidirectional linked lists
*/

#include <stdio.h>
#include <stdlib.h>
#define DATA_LENGTH 6

struct number{
   long long int value;
   struct number *next;  /* points to the next structure in the list */
};

struct number *head_and_1 = NULL;
struct number *prev_and_1 = NULL;
struct number *current_and_1 = NULL;
void reverse_list_traversal(struct number *head);


int main(void)
{
    long long int data[DATA_LENGTH] = {4, 8, 15, 16, 23, 42};
    struct number *head = NULL;
    struct number *prev, *current;
    int counter = 0;
    while(counter < DATA_LENGTH)
    {
       current = (struct number *)malloc(sizeof(struct number));
       if(current == NULL)
       {
           printf("Error while allocating memory!\n");
           exit(1);
       }
       if(head == NULL)           /* first structure */
           head = current;
       else
           prev->next = current;  /* subsequent structures */
       current->next = NULL;
       current->value = data[counter];
       prev = current;
       counter++;
    }
    current = head;
    while(current != NULL)
    {
        printf("%lld ", current->value);
        fflush(0);
        current = current->next;
    }
    putchar('\n');
    reverse_list_traversal(head);
    current_and_1 = head_and_1;
    while(current_and_1 != NULL)
    {
        printf("%lld ", current_and_1->value);
        fflush(0);
        current_and_1 = current_and_1->next;
    }
    current = head;                   /* freeing allocated memory */
    while(current != NULL)
    {
        current = head;
        if(head != NULL)
            head = current->next;
        free(current);
    }
    current_and_1 = head_and_1;       /* freeing allocated memory */
    while(current_and_1 != NULL)
    {
        current_and_1 = head_and_1;
        if(head_and_1 != NULL)
            head_and_1 = current_and_1->next;
        free(current_and_1);
    }
    printf("\nThis program is complete!\n");
    return 0;
}
void reverse_list_traversal(struct number *head)
{
    struct number *current = head;
    if(current->next != NULL)
        reverse_list_traversal(current->next);
    if((current->value & 1)== 1)
    {
        current_and_1 = (struct number *)malloc(sizeof(struct number));
        if(current_and_1 == NULL)
        {
           printf("Error while allocating memory!\n");
           exit(1);
        }
        if(head_and_1 == NULL)                 /* first structure */
            head_and_1 = current_and_1;
        else
            prev_and_1->next = current_and_1;  /* subsequent structures */
        current_and_1->next = NULL;
        current_and_1->value = current->value;
        prev_and_1 = current_and_1;
    }

}
