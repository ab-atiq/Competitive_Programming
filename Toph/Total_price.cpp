#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, p, s = 0;
    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        long long int w;
        cin >> w;
        s += w * p;
    }
    cout << s << endl;
    return 0;
}