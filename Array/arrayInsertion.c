#include <stdio.h>
int main()
{
    int size, a[50], i, pos, num;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Array Overflow");
    }
    else
    {
        printf("Enter the elements: \n");
        for (i = 0; i < size; i++)
            scanf("%d", &a[i]);
        printf("Enter the number to be inserted: \n");
        scanf("%d", &num);
        printf("Enter the position: \n");
        scanf("%d", &pos);
        if (pos <= 0 || pos > size)
        {
            printf("Position is invalid.\n");
        }
        else
        {
            // Insertion at specific position
            for (i = size - 1; i >= pos - 1; i--)
            {
                a[i + 1] = a[i];
            }
            a[pos - 1] = num;
            size++;

            // Insertion at begining
            for (i = size - 1; i >= 0; i--)
            {
                a[i + 1] = a[i];
            }
            a[0] = num;
            size++;

            // Insertion at the end
            a[size] = num;
            size++;

            // print
            printf("\n");
            for (i = 0; i < size; i++)
            {
                printf("%d\t", a[i]);
            }
        }
    }
    return 0;
}