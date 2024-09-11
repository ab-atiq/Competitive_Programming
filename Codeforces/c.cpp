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
        long long int n;
        cin >> n;
        long long int arr[n];
        for (long long int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        long long int cnt = 0;
        if (arr[0] == 0)
        {
            cnt++;
        }

        // i will increase cnt value by 1 when an array all element without one element sum equal to that number. how can i do that?

        


        for (long long int j = 2; j <= n; j++)
        {
            for(long long int k = 0; k < j; k++)
            {
                if(arr[k] == 0)
                {
                    cnt++;
                }
            }
        }
    }
    return 0;
}
