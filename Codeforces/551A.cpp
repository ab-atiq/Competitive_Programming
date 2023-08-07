#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[2010], i, j, c;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[i])
                c++;
        }
        cout << c + 1 << " ";
    }
}