
#include <stdio.h>

int sum_odd_even(int arr[], int len)
{
    int sum = 0;

    for (int i = 1; i <= len; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 == 0)
        {
            sum += arr[i] + i;
        }
        else if (i % 2 == 1 && arr[i] % 2 == 1)
        {
            sum += arr[i] + i;
        }
    }

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = sum_odd_even(arr, n);
    printf("%d\n", sum);

    return 0;
}

