#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, outStr = "";
    cin >> str;
    int len = str.length();
    // cout << str;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '.')
            outStr += "0";
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            outStr += "1";
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '-')
        {
            outStr += "2";
            i++;
        };
    }
    cout << outStr << endl;
    return 0;
}