#include <stdio.h>
#include <stdlib.h>
#define DATA_LENGTH 6

struct number{
   long long int value;
   struct number *next;  /* указывает на следующую структуру в списке */
};

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
           printf("Ошибка при выделении памяти!\n");
           exit(1);
       }
       if(head == NULL)           /* первая структура */
           head = current;
       else
           prev->next = current;  /* последующие структуры */
       current->next = NULL;
       current->value = data[counter];
       prev = current;
       counter++;
    }
    current = head;
    while(current != NULL)
    {
        printf("%lld ", current->value);
        current = current->next;
    }

    printf("\nHello world!\n");
    return 0;
}
