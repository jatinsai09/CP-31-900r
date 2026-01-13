#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > v(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        int flag = 1;
        for (int i = 2; i < n; i++) {
            if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
                cout << "YES\n";
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                flag = 0;
                break;
            }
        }

        if (flag) {
            cout << "NO\n";
        }
    }
}