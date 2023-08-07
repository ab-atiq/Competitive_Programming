#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int chk = 0;
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[0] == 'O' && s[1] == 'O' && chk == 0)
        {
            chk = 1;
            s[0] = '+';
            s[1] = '+';
        }
        else if (s[3] == 'O' && s[4] == 'O' && chk == 0)
        {
            chk = 1;
            s[3] = '+';
            s[4] = '+';
        }
        // store new string in string array
        arr[i] = s;
    }
    if (chk)
    {
        cout << "YES" << endl;
        for (int x = 0; x < n; x++)
            cout << arr[x] << "\n";
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}