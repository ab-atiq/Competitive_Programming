#include <stdio.h>
int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];

    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxPoint = arr[0], minPoint = arr[0], amazing = 0;
    for (int i = 1; i < sz; i++)
    {
        if (maxPoint < arr[i])
        {
            maxPoint = arr[i];
            amazing++;
        }
        if (minPoint > arr[i])
        {
            minPoint = arr[i];
            amazing++;
        }
    }
    printf("%d\n", amazing);
    return 0;
}
