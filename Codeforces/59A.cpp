#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int count = 0;
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }
    if (len / 2 < count)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str << endl;
    }else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
    }
    return 0;
}