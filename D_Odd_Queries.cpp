#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, q, i;
    cin >> n >> q;


    vector < long long > v(n + 1), psum(n + 1);
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
        psum[i] = psum[i - 1] + v[i];
    }

    while (q--) {
        long long l, r, k;
        cin >> l >> r >> k;

        long long rsum = psum[l - 1] + (psum[n] - psum[r]) + k * (r - l + 1);

        if (rsum % 2) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}