#include <stdio.h>
void main()
{
    int a[50], n, i;
    printf("Enter the number of array elements:\t");
    printf("\n");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array elements are: ");
    // Traversal
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}