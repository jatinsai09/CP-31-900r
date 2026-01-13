#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector < int > a(n * k);
        for (int i = 0; i < n * k; i++) {
            cin >> a[i];
        }
        long long res = 0;
        int i = n * k;
        while (k--) {
            i = i - (n / 2 + 1);
            res += a[i];
        }
        cout << res << endl;
    }
}