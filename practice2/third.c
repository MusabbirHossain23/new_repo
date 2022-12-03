#include <stdio.h>

int calculate_sum(int n)
{
    int i = 1, sum = 0;
    int div = 0;
    while (i)
    {
        if (i * 3 > n)
        {
            div = i - 1;
            break;
        }
        if (i * 3 == n)
        {
            div = i;
            break;
        }
        i++;
    }

    if (div > 0)
    {
        if (div == 1)
        {
            sum += 6;
            for (int x = (div * 3) + 1; x <= n; x++)
            {
                sum -= x;
            }
        }
        else if (div % 2 == 0)
        {
            sum -= (div / 2) * 9;
            for (int x = (div * 3) + 1; x <= n; x++)
            {
                sum += x;
            }
        }
        else
        {
            sum -= ((div - 1) / 2) * 9;

            int c = ((div - 1) * 3);
            for (int i = c + 1;; i++)
            {
                sum += i;
                if (i % 3 == 0)
                {
                    break;
                }
            }

            for (int x = (div * 3) + 1; x <= n; x++)
            {
                sum -= x;
            }
        }
    }
    else
    {
        for (int x = 1; x <= n; x++)
        {
            sum += x;
        }
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int sum = calculate_sum(n);
    printf("%d\n", sum);

    return 0;
}


