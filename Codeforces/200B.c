#include <stdio.h>
int main()
{
    int n, sum = 0;
    float frac = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    frac = (sum*1.00) / n;
    printf("%f\n", frac);
    return 0;
}
