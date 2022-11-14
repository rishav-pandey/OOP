#include <stdio.h>

void search(int arr[], int n, int x)
{

    int beg, end, mid;
    beg = 0;
    end = n - 1;
    while (beg < end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == x)
        {
            printf("\nValue found");
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

    printf("\nElement not found");
}

int main()
{
    int arr[100] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, x;

    printf("\nDisplaying the array elements one by one: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d", arr[i]);
    }

    printf("\nEnter the element you want to search: ");
    scanf("%d", &x);

    search(arr, 10, x);

    return 0;
}