// --------------------------------------
//           A.B Atiqur Rahman
// --------------------------------------
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n;
        string s;
        cin >> n >> s;
        string tem = s;
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        unordered_map<char, char> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]] = s[s.size() - 1 - i];
            mp[s[s.size() - 1 - i]] = s[i];
        }

        for (auto c: tem) {
            cout << mp[c];
        }
        cout << endl;
    }
    return 0;
}
