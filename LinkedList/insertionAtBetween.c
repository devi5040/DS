#include <stdio.h>
#include <stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *next;
};
int main()
{
    int choice = 1, count = 0, pos, i = 1;
    struct node *head, *newNode, *temp;
    head = 0;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->next = 0;
        printf("Enter the data\n");
        scanf("%d", &newNode->data);
        if (head == 0)
            head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to insert more elements? yes:1 no:0\n");
        scanf("%d", &choice);
        count++;
    }
    // insertion at end
    printf("Enter the position\n");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Invalid position");
        exit(0);
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data\n");
        scanf("%d", &newNode->data);
        newNode->next = temp->next;
        temp->next = newNode;
        // print
        printf("\n\n");
        temp = head;
        while (temp != 0)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}
