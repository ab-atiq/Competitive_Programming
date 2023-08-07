#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt = 0;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            cnt++;
    }
    cout << cnt << endl;

    for (int i = 0; i < t - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
            cout << arr[i] << " ";
    }
    cout << arr[t - 1] << endl;

    return 0;
}