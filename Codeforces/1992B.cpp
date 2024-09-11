#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int a[k];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        // sort a array
        sort(a, a + k);
        int sum = 0;
        for (int i = 0; i < k - 1; i++)
        {
            if (a[i] == 1)
                sum ++;
            else
            {
                sum += 2 * a[i] - 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}