#include <bits/stdc++.h>
using namespace std;
int main()
{
    double l, p, q;
    cin >> l >> p >> q;
    double c = p * (l / (p + q));
    cout << fixed << setprecision(4) << c << endl;

    return 0;
}