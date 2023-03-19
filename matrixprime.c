#include <stdio.h>
#include <math.h>
int checkPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}
int main()
{
    int arr[3][3], n;
    printf("Enter the value from which you want to start the prime: ");
    scanf("%d", &n);
    int temp = n;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (checkPrime(n) == 1)
                arr[i][j] = n;
            else
            {
                while (checkPrime(n) != 1)
                    n++;
                arr[i][j] = n;
            }
            n++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}