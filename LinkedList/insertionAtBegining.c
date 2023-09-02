#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int choice = 1;
    struct node *head, *newNode, *temp;
    head = 0;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data\n");
        scanf("%d", &newNode->data);
        newNode->next = 0;
        if (head == 0)
            head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to insert more elements? yes:1 no:0\n");
        scanf("%d", &choice);
    }
    // insertion at begining
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted at begining\n");
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
    printf("\n\n");
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}