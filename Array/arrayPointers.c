#include <stdio.h>
int main()
{
    int a[5], i;
    int *q = a;
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    // printing using index
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    // printing using arrayname
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");
    // printing using pointer
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(q + i));
    }
    printf("\n");
    // printing using arrayname
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(i + a));
    }
    printf("\n");
    // printing using pointer
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(i + q));
    }
    printf("\n");
    // printing using index
    for (i = 0; i < 5; i++)
    {
        printf("%d ", i[a]);
    }
    printf("\n");
    // printing using pointer
    for (i = 0; i < 5; i++)
    {
        printf("%d ", i[q]);
    }
    printf("\n");
}