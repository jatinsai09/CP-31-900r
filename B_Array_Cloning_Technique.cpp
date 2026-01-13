#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > v(n);
        int maxf = 0;
        unordered_map < int, int > mp;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            ++mp[v[i]];
        }
        for (auto it: mp) {
            maxf = max(maxf, it.second);
        }

        int ops = 0;
        while (maxf < n) {
            ++ops;
            if (n - maxf >= maxf) {
                ops += maxf;
                maxf *= 2;
            }
            else {
                ops += (n - maxf);
                maxf = n;
            }
        }
        cout << ops << endl;
    }
}