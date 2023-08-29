#include <stdio.h>
int main()
{
    // compile time initialization
    int array1[2][3] = {1, 2, 3, 4, 5, 6}, array2[2][3];
    int i, j;
    // if you initialize after declaration seperately it will give errors

    // Run Time Initialization
    printf("Enter the array elements\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &array2[i][j]);

    // print array1
    printf("Array1 Elements are:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", array1[i][j]);
        }
        printf("\n");
    }
    // print array2
    printf("\n\n\nArray2 Elements are:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }
}