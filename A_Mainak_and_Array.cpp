#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        vector < int > v(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        int res = v[n] - v[1];

        //fix v[1]
        for (i = 2; i <= n; ++i) {
            res = max(res, v[i] - v[1]);
        }

        //fix v[n]
        for (i = 1; i < n; ++i) {
            res = max(res, v[n] - v[i]);
        }

        //pick entire array as subsegment
        for (i = 1; i < n; ++i) {
            res = max(res, v[i] - v[i + 1]);
        }

        cout << res << endl;
    }
}