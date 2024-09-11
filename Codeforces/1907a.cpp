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
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        char ch1 = str[0];
        char ch2 = str[1];
        char n = '1';
        char m = 'a';
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (char(m + i) == ch1 || char(n + j) == ch2)
                {
                    if (char(m + i) == ch1 && char(n + j) == ch2)
                        continue;
                    else
                        cout << char(m + i) << char(n + j) << endl;
                }
            }
        }
    }
    return 0;
}