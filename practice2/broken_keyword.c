#include <stdio.h>
#include <string.h>

void broken_keyboard(char str[], int n)
{
    char new_str[3024];
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] % 2 == 0)
        {
            new_str[j] = str[i];
            new_str[++j] = str[i];
        }
        else
        {
            new_str[j] = str[i];
        }
        j++;
    }

    printf("%s\n", new_str);
}

int main()
{
    char str[1024];
    scanf("%s", str);

    int len = strlen(str);

    broken_keyboard(str, len);
    return 0;
}


