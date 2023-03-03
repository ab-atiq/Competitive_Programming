#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n], B[n], C[n], cntA = 0, cntB = 0, cntC = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i] >> B[i] >> C[i];
        cntA += A[i];
        cntB += B[i];
        cntC += C[i];
    }
    if (cntA == 0 && cntB == 0 && cntC == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}