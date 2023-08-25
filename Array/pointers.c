#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int *ptr;
    ptr = a;
    // printing first element
    printf("%d\t", *a);
    printf("%d\n", *ptr);

    // printing third element
    printf("%d\t", a[2]);
    printf("%d\t", *(a + 2));
    printf("%d\n", *(ptr + 2));
    printf("%d\t", *a + 1);

    // difference between *(a+1) and *a+1
    printf("%d\t", a[1]);
    printf("%d\t", *(a + 1));
    printf("%d\n", *a + 1);

    // ptr operations
    ptr = a;
    ptr++;
    printf("%d\t", *ptr);
    ptr = a;
    ptr + 2; // it will just print value of ptr
    printf("%d\n", *ptr);
    //---
    ptr = &a[5];
    printf("%d\t", *ptr);
    ptr--;
    printf("%d\t", *ptr);
    ptr = &a[5];
    ptr - 2; // it will just print value of ptr
    printf("%d\n", *ptr);
}