#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    struct node *head, *temp, *newNode;
    head = 0;
    int choice = 1;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->prev = 0;
        newNode->next = 0;
        printf("Enter the data\n");
        scanf("%d", &newNode->data);
        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
        printf("If you want to stop enter 0\n");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}