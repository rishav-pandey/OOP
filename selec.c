#include <stdio.h>
void selectionSort(int *A, int n)
{
    int indexOfMin733, temp733;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin733 = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin733])
            {
                indexOfMin733 = j;
            }
        }
        temp733 = A[i];
        A[i] = A[indexOfMin733];
        A[indexOfMin733] = temp733;
    }
}
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
}
