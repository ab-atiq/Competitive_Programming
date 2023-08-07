#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int x[n], y[n];
    double sum = 0, calc;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        double mul1 = (x[i] - x[i + 1]) * (x[i] - x[i + 1]), mul2 = (y[i] - y[i + 1]) * (y[i] - y[i + 1]);
        sum += sqrt(mul1 + mul2);
    }
    calc = sum * (double)k / 50.00;
    cout << fixed << setprecision(6) << calc << endl;
    return 0;
}