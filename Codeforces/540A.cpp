#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str1, str2;
    cin >> n >> str1 >> str2;
    int minCnt = 0;
    for (int i = 0; i < n; i++)
    {
        int minDigit = min(int(str1[i]) - 48, int(str2[i]) - 48) + 10;
        int maxDigit = max(int(str1[i]) - 48, int(str2[i]) - 48);
        // cout << minDigit << " " << maxDigit << endl;
        int difference = abs((int(str1[i]) - 48) - (int(str2[i]) - 48));
        // cout << difference << endl;
        if (abs(minDigit - maxDigit) < difference)
            difference = abs(minDigit - maxDigit);
        minCnt += difference;
        // cout << minCnt << endl;
    }
    cout << minCnt << endl;
    return 0;
}
