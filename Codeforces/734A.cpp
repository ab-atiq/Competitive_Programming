#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, A = 0, D = 0;
    cin >> n;
    string str;
    cin >> str;
    int l = str.length();
    // cout << l << endl;
    for (int i = 0; i < l; i++)
    {
        // cout << str[i] << endl;
        if (str[i] == 'A')
        {
            A++;
        }
        if (str[i] == 'D')
        {
            D++;
        }
    }
    if (A > D)
    {
        cout << "Anton" << endl;
    }
    else if (A < D)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}
