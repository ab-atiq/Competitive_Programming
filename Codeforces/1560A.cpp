#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        for (int i = 1;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                continue;
            }
            k--;
            if (k == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
