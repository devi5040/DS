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
    struct node *head, *temp, *newNode, *cur; // in c++ we can also just write node *head;
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
    printf("Before deletion:\n");
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    // deletion
    temp = head;
    while (temp->next != 0)
    {
        cur = temp;
        temp = temp->next;
    }
    if (temp == head)
        head = 0;
    else
        cur->next = 0;
    free(temp);

    temp = head;
    printf("\n\n");
    printf("After deletion:\n");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}