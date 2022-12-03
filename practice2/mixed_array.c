#include <stdio.h>
#include <math.h>

int find_prime(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 2; j <= floor(sqrt(*arr)); j++)
        {
            if (*arr % j == 0)
            {
                count += 0;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count += 1;
        }

        arr++;
    }

    return count;
}

double average_of_evens(int *arr, int n)
{
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (*arr % 2 == 0)
        {
            count++;
            sum += *arr;
        }
        arr++;
    }

    return sum / count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    int prime = find_prime(arr, n);
    double average = average_of_evens(arr, n);

    printf("prime numbers: %d\n", prime);
    printf("Average of all even integers: %.2lf\n", average);

    return 0;
}


