// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int tc;
//     cin >> tc;
//     for (int i = 0; i < tc; i++)
//     {
//         int n;
//         cin >> n;
//         vector<int> v;
//         for (int j = 0; j < n; j++)
//         {
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }

//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 for (int l = 0; l < n; l++)
//                 {
//                     if (v[l] % v[j] == 0 || v[l] % v[k] == 0)
//                     {
//                         cnt++;
//                     }
//                 }
//                 if (cnt == n)
//                 {
//                     break;
//                 }
//                 else
//                 {
//                     cnt = 0;
//                 }
//             }
//             if (cnt == n)
//             {
//                 break;
//             }
//         }
//         if (cnt == n)
//         {
//             cout << "Yes" << endl;
//         }
//         else
//         {
//             cout << "No" << endl;
//         }
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }

        int min1 = INT_MAX, min2 = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (v[j] < min1) {
                min2 = min1;
                min1 = v[j];
            } else if (v[j] < min2) {
                min2 = v[j];
            }
        }

        bool valid = true;
        for (int j = 0; j < n; j++) {
            if (v[j] % min1 != 0 && v[j] % min2 != 0) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
