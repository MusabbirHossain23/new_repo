#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int n, cases, x, y;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &cases);
    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d", &x, &y);
        swap(&arr[x], &arr[y]);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


