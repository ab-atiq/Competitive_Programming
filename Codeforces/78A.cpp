#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    string str1, str2, str3;
    // cin >> str1 >> str2 >> str3;
    getline(cin, str1);
    getline(cin, str2);
    getline(cin, str3);
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
        {
            cnt1++;
        }
    }
    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')
        {
            cnt2++;
        }
    }
    for (int i = 0; i < str3.length(); i++)
    {
        if (str3[i] == 'a' || str3[i] == 'e' || str3[i] == 'i' || str3[i] == 'o' || str3[i] == 'u')
        {
            cnt3++;
        }
    }
    if (cnt1 == 5 && cnt2 == 7 && cnt3 == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}