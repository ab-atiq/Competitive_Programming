#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] > c)
        {
            cnt = 0;
        }
        if (arr[i + 1] - arr[i] <= c)
        {
            cnt++;
        }
    }
    cout << cnt + 1 << endl;

    return 0;
}