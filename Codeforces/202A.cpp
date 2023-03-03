#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    cin >> str1;
    sort(str1.begin(), str1.end());
    // cout << str1 << endl;
    char ch = str1[str1.length() - 1];
    for (char c : str1)
    {
        if (c == ch)
            cout << c;
    }
    cout << endl;

    return 0;
}