#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n + 1);
        int res = 0;

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            res = __gcd(res, abs(v[i] - i));
        }
        cout << res << endl;
    }
}