#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2, outStr = "";
    cin >> str1 >> str2;
    int len = str1.length();
    for (int i = 0; i < len; i++)
    {
        if ((str1[i] == '0' && str2[i] == '1') || (str1[i] == '1' && str2[i] == '0'))
        {
            outStr += '1';
        }
        else
        {
            outStr += '0';
        }
    }
    cout << outStr << endl;
    return 0;
}