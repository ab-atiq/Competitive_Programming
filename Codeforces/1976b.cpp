// --------------------------------------
//           A.B Atiqur Rahman
// --------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n + 1), tem(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            tem[i] = a[i];
        }
        for (int i = 0; i < n + 1; i++)
        {
            cin >> b[i];
        }
        int minCnt = 0;
        int bn = b[n];
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                int diff = abs(b[i] - a[i]);
                minCnt += diff;
                if (a[i] > b[i])
                {
                    for (int k = 1; k <= diff, a[i] != b[i]; k++, a[i]--)
                    {
                        if (a[i] == b[n] && flag)
                        {
                            minCnt++; // push last
                            flag = false;
                            break;
                        }
                    }
                }
                else
                {
                    for (int k = 1; k <= diff, a[i] != b[i]; k++, a[i]++)
                    {
                        if (a[i] == b[n] && flag)
                        {
                            minCnt++; // push last
                            flag = false;
                            break;
                        }
                    }
                }
            }
        }
        // check for bn
        if (flag)
        {
            // min value store in minVal from vector a
            sort(tem.begin(), tem.end());
            int minVal = tem[0];
            int maxVal = tem[n - 1];
            int nearLeftFromBn = 0, nearRightFromBn = 0;
            for (int i = 0; i < n; i++)
            {
                if (tem[i] < bn)
                {
                    nearLeftFromBn = tem[i];
                }
                if (tem[i] > bn)
                {
                    nearRightFromBn = tem[i];
                    break;
                }
            }
            int difFromMin = abs(minVal - bn);
            int difFromMax = abs(maxVal - bn);
            int difLeft = abs(nearLeftFromBn - bn);
            int difRight = abs(nearRightFromBn - bn);

            // find min value from difFromMin, difFromMax, difLeft, difRight
            if (difFromMin <= difFromMax && difFromMin <= difLeft && difFromMin <= difRight)
            {
                minCnt += difFromMin;
            }
            else if (difFromMax <= difFromMin && difFromMax <= difLeft && difFromMax <= difRight)
            {
                minCnt += difFromMax;
            }
            else if (difLeft <= difFromMin && difLeft <= difFromMax && difLeft <= difRight)
            {
                minCnt += difLeft;
            }
            else
            {
                minCnt += difRight;
            }
            minCnt++;
        }

        cout << minCnt << endl;
    }
    return 0;
}
