#include <stdio.h>
#include <math.h>

int beautiful_array(int *arr, int len)
{
    int count = 0;
    int mid = ceil((float)len / 2);

    for (int i = 0; i < len; i++)
    {
        int number = *arr;

        while (number != 0)
        {
            int digit = number % 10;
            number /= 10;

            if (digit == 7)
            {
                count++;
                continue;
            }
        }

        arr++;
    }

    if (mid <= count)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (beautiful_array(arr, n))
    {
        printf("Beautiful\n");
    }
    else
    {
        printf("Ugly\n");
    }

    return 0;
}


