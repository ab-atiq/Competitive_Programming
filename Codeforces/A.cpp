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
        string str1, str2, temp;
        cin >> str1 >> str2;
        temp = str1;
        str1[0] = str2[0];
        str2[0] = temp[0];
        cout << str1 << " " << str2 << endl;
    }
    return 0;
}
