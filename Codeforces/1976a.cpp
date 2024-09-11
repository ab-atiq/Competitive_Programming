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
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool flag = true;

        for (int i = 0; i < n - 1; i++)

        {
            int x = str[i];
            int y = str[i + 1];
            if (x > y)
            {
                flag = false;
                break;
            }
        }
        if (flag)
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
