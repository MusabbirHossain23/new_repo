#include <stdio.h>

void consecutive_even(int x)
{
    int range = x / 4;
    range -= 3;
    int count = 0;
    while (count < 4)
    {
        if (range % 2 == 0)
        {
            count++;
            printf("%d ", range);
        }
        range++;
    }
    printf("\n");
}

int main()
{
    int a, x;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &x);

        consecutive_even(x);
    }

    return 0;
}


