#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, newN;
        cin >> n;
        if (n <= 10)
        {
            cout << 1 << endl;
            cout << n << endl;
        }
        else
        {
            int cnt = 0;
            newN = n;
            while (n > 0)
            {
                if (n % 10 != 0)
                    cnt++;
                n /= 10;
            }
            cout << cnt << endl;

            n = newN;
            int mul = 1; // remaining number calculate depends on how much number divide.
            while (n > 0)
            {
                int rem = n % 10;
                if (rem != 0)
                {
                    cout << rem * mul << " ";
                }
                n /= 10;
                mul *= 10;
            }
            cout << endl;
        }
    }
    return 0;
}