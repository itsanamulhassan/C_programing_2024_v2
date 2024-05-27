#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", i + 1);
        }
    }
    else if (n < 0)
    {
        for (int i = -n; i >= 0; i--)
        {
            long long int single_num = -n + i - -n;

            if (single_num == 0)
            {
                printf("%d ", 0);
            }
            else
            {
                printf("-%lld ", single_num);
            }
        }
    }

    if (n == 0)
    {
        printf("%d", 0);
    }

    return 0;
}