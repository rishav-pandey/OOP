#include <stdio.h>
int binary_search(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main(void)
{
    int arr[] = {50, 44, 33, 27, 20, 19, 17, 15, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int key = 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, size - 1, key);
    if (result == -1)
    {
        printf("Key is not present in array");
    }
    else
    {
        printf("Key is present at index :%d", result);
    }
    return 0;
}