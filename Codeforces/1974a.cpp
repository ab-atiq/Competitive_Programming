#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int x, y, screenCnt = 0;
        cin >> x >> y;
        // ceil of y/2 store in screenCnt
        screenCnt = ceil(y / 2.0);
        int max_x_icon = 15 * screenCnt - 4 * y;
        if (x > max_x_icon)
        {
            x -= max_x_icon;
            while (x > 0)
            {
                x -= 15;
                screenCnt++;
            }
        }
        cout << screenCnt << endl;
    }

    return 0;
}