#include <stdio.h>
int main()
{
    int array[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p;
    /*
        p = array; //It gives error
    */
    p = &array[0][0]; // or p = &array[0];
    printf("p\t\tarray\t\t&array[0][0]\t\t&array\t\t*array\t\tarray[0]\n");
    printf("%u\t\t%u\t\t%u\t\t\t%u\t\t%u\t\t%u\n", p, array, &array[0][0], &array, *array, array[0]);
    printf("\n\n");
    printf("array+1\t\t&array[1]\t\tarray[1]\t\t*(array+1)\t\t&array[1][0]\n");
    printf("%u\t\t%u\t\t\t%u\t\t\t%u\t\t\t%u\n", array + 1, &array[1], array[1], *(array + 1), &array[1][0]);
    printf("\n\n");
    printf("Base address is: %u", &array);
    printf("\narray[1]+1\t=\t%u\n\n", array[1] + 1);
    printf("\n&array[1]+1\t=\t%u\n\n", &array[1] + 1);
    printf("\n&(array[1]+1)\t=\t%u\n\n", *(array[1] + 1));
}