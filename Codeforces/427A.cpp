#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, untreated = 0;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        sum += k;
        if (sum < 0)
        {
            if (k == -1)
            {
                untreated++;
                sum = 0;
            }
        }
    }
    cout << untreated << endl;
    return 0;
}
