#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        long long int arr[n];
        long long int sum = 0, minNeed = 0; // minimum sum from 0-n is (n*(n+1))/2

        bool chkYes = true;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];

            // minimum sum need from 0 to n-1 index
            minNeed += i; // ((i-1)*i)/2

            // check every step in array that minimum need is less than or equal sum of array numbers from 0 to i index.
            // if minimum need is greater than sum that means i index previous stack or array elements can not make in increasing order.
            // Since element can move forward (ith to (i+1)th index), can't move backward (ith to (i-1)th)
            if (minNeed > sum)
            {
                chkYes = false;
            }
        }
        if (chkYes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}