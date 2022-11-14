#include <stdio.h>
int main()
{
    int size1, size2, size3;
    printf("\nEnter the size for the first array: ");
    scanf("%d", &size1);
    printf("\nEnter the size for the second array: ");
    scanf("%d", &size2);

    size3 = size1 + size2;
    printf("\nEnter the elements in a sorted manner:");

    int array1[size1], array2[size2], array3[size3];
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
        array3[i] = array1[i];
    }
    int k = size1;
    printf("\nEnter the elements in a sorted manner:");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &array2[i]);
        array3[k] = array2[i];
        k++;
    }
    printf("\nmerged array of first and second:\n");
    for (int i = 0; i < size3; i++)
        printf("%d ", array3[i]);

    printf("\nsorted array in descending order\n");
    for (int i = 0; i < size3; i++)
    {
        int temp;
        for (int j = i + 1; j < size3; j++)
        {
            if (array3[i] < array3[j])
            {
                temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }
    for (int i = 0; i < size3; i++)
    {
        printf(" %d ", array3[i]);
    }
    return 0;
}