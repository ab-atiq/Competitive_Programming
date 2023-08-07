#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int MCnt = 0, BCnt = 0;
        bool chk = true;
        for (int i = 0; i < n; i++)
        {
            // cout << arr[i];
            if (arr[i] % 2 == 0)
            {
                MCnt += arr[i];
            }
            else
            {
                BCnt += arr[i];
            }
            // if (MCnt <= BCnt)
            //     chk = false;
        }
        if (MCnt > BCnt)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}