#include <bits/stdc++.h>
using namespace std;
int nextPrime(int p)
{
    for (int i = p + 1;; i++)
    {
        bool chk = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                chk = false;
            }
        }
        if (chk)
        {
            return i;
        }
    }
}
int main()
{
    int n, m, prime;
    cin >> n >> m;

    prime = nextPrime(n);

    if (prime == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}