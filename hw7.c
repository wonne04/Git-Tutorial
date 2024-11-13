#include <stdio.h>

int main(void)
{
    int i;
    int arr1[6] = { 1,2,3,4,5,6 };
    int arr2[6] = { 7,8,9,10,11,12 };

    int* ptr1 = arr1;
    int* ptr2 = arr2;

    for (i = 0; i < 6; i++)
    {
        *ptr1 += 6;
        if (i < 5)
            ptr1++;
    }


    for (i = 0; i < 6; i++)
    {
        *ptr2 -= 6;
        if (i < 5)
            ptr2++;
    }

    for (i = 0; i < 6; i++)
    {
        printf("%d", arr1[i]);
    }

    printf("\n");

    for (i = 0; i < 6; i++)
    {
        printf("%d", arr2[i]);
    }

    return 0;
}