#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;
    for (int y = year + 1;; y++)
    {
        int temYear = y;
        int count[10] = {0};
        while (temYear > 0)
        {
            int rem = temYear % 10;
            count[rem]++;
            temYear /= 10;
        }
        bool chk = true;
        for (int i = 0; i < 10; i++)
        {
            if (count[i] > 1)
            {
                chk = false;
            }
        }
        if (chk)
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}