#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//#define endl '\n'

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n;
        string s;
        cin >> n >> s;
        vector<char> ans(n, ' ');
        vector<ll> nv, sv, wv, ev;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'N') nv.push_back(i);
            if (s[i] == 'S') sv.push_back(i);
            if (s[i] == 'W') wv.push_back(i);
            if (s[i] == 'E') ev.push_back(i);
        }

        while (nv.size() > 1) {
            ans[nv.back()] = 'R';
            nv.pop_back();

            ans[nv.back()] = 'H';
            nv.pop_back();
        }

        while (sv.size() > 1) {
            ans[sv.back()] = 'R';
            sv.pop_back();

            ans[sv.back()] = 'H';
            sv.pop_back();
        }

        while (wv.size() > 1) {
            ans[wv.back()] = 'R';
            wv.pop_back();

            ans[wv.back()] = 'H';
            wv.pop_back();
        }

        while (ev.size() > 1) {
            ans[ev.back()] = 'R';
            ev.pop_back();

            ans[ev.back()] = 'H';
            ev.pop_back();
        }

        if (sv.size() == 1 && nv.size() == 1) {
            ans[sv.back()] = 'R';
            ans[nv.back()] = 'R';

            sv.pop_back();
            nv.pop_back();
        }

        if (wv.size() == 1 && ev.size() == 1) {
            ans[wv.back()] = 'H';
            ans[ev.back()] = 'H';

            wv.pop_back();
            ev.pop_back();
        }

        if (nv.empty() && sv.empty() && wv.empty() && ev.empty()) {
            for (auto c: ans) {
                cout << c;
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}