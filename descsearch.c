#include <stdio.h>

void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void search(int arr[], int n, int x)
{
    sort(arr, n);
    int beg, end, mid;
    beg = 0;
    end = n - 1;
    while (beg < end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == x)
        {
            printf("\nvalue found");
            return;
        }
        else
        {
            if (arr[mid] > x)
            {
                beg = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
}

int main()
{
    int arr[100] = {56, 53, 45, 42, 40, 38, 35, 33, 32, 29, 20, 19, 18, 17, 16, 14, 12, 11, 10, 9}, x;

    printf("\nEnter the element you want to search: ");
    scanf("%d", &x);

    search(arr, x);

    return 0;
}