#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ts;
    cin >> ts;
    while (ts--)
    {
        int a, b, c, d, temA, temB, temC, temD, cnt = 0;
        cin >> a >> b >> c >> d;
        temA = a;
        temB = b;
        temC = c;
        temD = d;
        for (int i = 1; i <= (temD - temB); i++)
        {
            cnt++;
            a++;
            b++;
        }
        int dif=(a - temC);
        for (int i = 1; i <= dif; i++)
        {
            cnt++;
            a--;
        }
        // cout<<cnt<<endl;

        if (a == temC && b == temD)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}