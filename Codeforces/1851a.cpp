#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, h_vlad;
        cin >> n >> m >> k >> h_vlad;
        vector<int> a(n);
        for ( i int i = 0;< n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += ((h_vlad != a[i]) && (abs(h_vlad - a[i]) % k == 0) && (abs(h_vlad - a[i]) <= (m - 1) * k));
        }
        cout << cnt << endl;
    }
    return 0;
}