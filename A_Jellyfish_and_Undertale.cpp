#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        long long total = b;

        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            total += min(v[i], a - 1);
        }
        cout << total << endl;
    }
}