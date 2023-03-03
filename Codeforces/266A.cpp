#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    char str[n];
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}