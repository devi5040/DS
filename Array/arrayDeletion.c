#include <stdio.h>
int main()
{
    int a[50], size, i, pos;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Array Overflow");
    }
    else
    {
        printf("Enter the elements:");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter the position:");
        scanf("%d", &pos);
        if (pos <= 0 || pos > size)
        {
            printf("Invalid position.\n");
        }
        else
        {
            // delete from specific position
            for (i = pos - 1; i < size - 1; i++)
            {
                a[i] = a[i + 1];
            }
            size--;

            // delete from begining
            for (i = 0; i < size - 1; i++)
            {
                a[i] = a[i + 1];
            }
            size--;

            // delete from end
            size--;

            // print
            for (i = 0; i < size; i++)
            {
                printf("%d\t", a[i]);
            }
        }
    }
    return 0;
}