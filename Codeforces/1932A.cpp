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
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '.')
                sum += 0;
            if (a[i] == '@')
                sum += 1;
            if (a[i + 1] == '*' && a[i] == '*')
            {
                break;
            }
        }
        cout << sum << endl;
    }
}