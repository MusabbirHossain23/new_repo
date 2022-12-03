#include <stdio.h>

int divisibile_by_three(int x);

int divisibile_by_five(int x);

int total_divisibility_count(int arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = total_divisibility_count(arr, n);

    if (count == 0)
        printf("%d\n", -1);
    else
        printf("%d\n", count);

    return 0;
}
int divisibile_by_three(int x)
{
    return x % 3 == 0 ? 1 : -1;
}
int divisibile_by_five(int x)
{
    return x % 5 == 0 ? 1 : -1;
}
int total_divisibility_count(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (divisibile_by_three(arr[i]) == 1)
        {
            count++;
        }
        else if (divisibile_by_five(arr[i]) == 1)
        {
            count++;
        }
    }

    return count;
}


