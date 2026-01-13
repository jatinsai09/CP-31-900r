#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int c = 1, res = 1;
        for (int i = 1; i < n; i++) {
            if (v[i] - v[i - 1] <= k) {
                c++;
            }
            else {
                c = 1;
            }
            res = max(c, res);
        }
        cout << n - res << endl;
    }
}