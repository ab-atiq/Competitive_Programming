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
        string str, outStr = "";
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            char ch = str[i];
            if (ch == 'b')
            {
                for (int j = outStr.size(); j >= 0; j--)
                {
                    if (outStr[j] >= 'a' && outStr[j] <= 'z')
                    {
                        outStr = outStr.substr(0, j) + outStr.substr(j + 1);
                        break;
                    }
                }
            }
            else if (ch == 'B')
            {
                for (int j = outStr.size(); j >= 0; j--)
                {
                    if (outStr[j] >= 'A' && outStr[j] <= 'Z')
                    {
                        outStr = outStr.substr(0, j) + outStr.substr(j + 1);
                        break;
                    }
                }
            }
            else
            {
                outStr += ch;
            }
        }
        cout << outStr << endl;
    }

    return 0;
}