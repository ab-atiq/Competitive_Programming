#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
#define endl '\n'
ll first = 1000'000'000'000;
ll second = 1000'000;
 
int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    ll test_case;
    cin >> test_case;
    for (int tcv = 0; tcv < test_case; tcv++) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (auto &i: arr) cin >> i;
        map<ll, ll> h3, hab, hac, hbc;
 
 
        ll ans = 0;
        for (int i = 0; i < n - 2; i++) {
            ll triplet = arr[i] * first + arr[i + 1] * second + arr[i + 2];
            ll ab = arr[i] * second + arr[i + 1];
            ll ac = arr[i] * second + arr[i + 2];
            ll bc = arr[i + 1] * second + arr[i + 2];
 
            ans -= h3[triplet] * 3;
            ans += hab[ab];
            ans += hac[ac];
            ans += hbc[bc];
 
            h3[triplet]++;
            hab[ab]++;
            hac[ac]++;
            hbc[bc]++;
        }
 
        cout << ans << endl;
    }
    return 0;
}