/*
----------------------
|                    |
| Abul Bashar Atiq   |
|                    |
----------------------
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key, chk = 0;
        cin >> n >> key;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == key)
            {
                chk = 1;
            }
        }
        if (chk == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}