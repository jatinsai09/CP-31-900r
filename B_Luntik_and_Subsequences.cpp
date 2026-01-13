#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long c1 = count(v.begin(), v.end(), 1);
        long long c0 = count(v.begin(), v.end(), 0);

        if (c1 == 0) {
            cout << 0 << endl;
        }
        else {
            cout << c1 * (1LL << c0) << endl;
        }
    }
}