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
    struct node *head, *tail, *temp, *newNode;
    int choice = 1;
    head = tail = 0;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->prev = 0;
        newNode->next = 0;
        printf("Enter the data\n");
        scanf("%d", &newNode->data);
        if (head == 0)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        printf("If you want to stop enter 0\n");
        scanf("%d", &choice);
    }
    // insertion at beg
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the new node to be inserted:\n");
    scanf("%d", &newNode->data);
    newNode->next = 0;
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
