#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int cntLucky = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem == 4 || rem == 7)
            cntLucky++;
        n /= 10;
    }
    if (cntLucky==7 || cntLucky==4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}