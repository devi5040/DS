#include <stdio.h>
#include <stdlib.h>
struct node // no memory will be allocated
{
    int data;
    struct node *next;
};
int main()
{
    int choice = 1;
    struct node *head, *currentNode, *temp, *nextNode, *prevNode, *newNode; // in c++ we can also just write node *head;
    head = 0;
    // to dynamically allocate memory in c we use malloc and in cpp we use new
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data\n");
        scanf("%d", &newNode->data); // accessing member of structure using pointer
        newNode->next = 0;
        if (head == 0)
            head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to continue if yes : 1 if no:0\n");
        scanf("%d", &choice);
    }
    temp->next = 0;
    printf("\n\n");
    printf("Linked list before reversing\n");
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    // reverse
    prevNode = 0;
    currentNode = nextNode = head;
    while (nextNode != 0)
    {
        nextNode = nextNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;

    printf("\n\n");
    printf("Linked list after reversing\n");
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}