#include <stdio.h>
int main()
{
    int n; // number of test case
    scanf("%d", &n);
    while (n--)
    {
        int k; // every single element
        scanf("%d", &k);
        for (int i = 1;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                continue;
            }
            k--;
            if (k == 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
 
    return 0;
}
