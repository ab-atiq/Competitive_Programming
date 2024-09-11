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
            int x;
            cin >> x;
            arr[i] = x;
        }
        int fidx = 0, lidx = 0, cnt = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1 && cnt == 0)
            {
                fidx = i;
                lidx = i;
                cnt++;
                cnt1++;
            }
            else if (arr[i] == 1)
            {
                lidx = i;
                cnt1++;
            }
        }
        int ans = 0;
        ans = (lidx - fidx) - cnt1 + 1;
        cout << ans << endl;
    }
}