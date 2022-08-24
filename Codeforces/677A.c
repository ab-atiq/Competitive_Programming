#include <stdio.h>
int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int width = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }
    printf("%d\n", width);
    return 0;
}
