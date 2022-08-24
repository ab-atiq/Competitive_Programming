#include <stdio.h>
int main()
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);
    for (i = 1; i <= m; i++)
    {
        if (i % 2 == 1)
        {
            for (j = 1; j <= n; j++)
                printf("#");
        }
        else if (i % 4 == 0)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1)
                    printf("#");
                else
                    printf(".");
            }
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == n)
                    printf("#");
                else
                    printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
