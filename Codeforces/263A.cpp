#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Matrix[6][6], tempI, tempJ, distance;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> Matrix[i][j];
            if (Matrix[i][j] == 1)
            {
                tempI = i;
                tempJ = j;
            }
        }
    }
    distance = abs(3 - tempI) + abs(3 - tempJ);
    cout << distance << endl;
    return 0;
}