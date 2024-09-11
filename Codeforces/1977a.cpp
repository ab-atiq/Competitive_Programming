// --------------------------------------
//           A.B Atiqur Rahman
// --------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int n, m;
        cin >> n >> m;
        int res = n - m;
        if (res >= 0)
        {
            if (res % 2 == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
