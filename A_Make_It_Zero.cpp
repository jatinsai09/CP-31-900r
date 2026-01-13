#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (n & 1) {
            cout << 4 << endl;
            for (int i = 0; i < 2; i++) {
                cout << 1 << " " << n - 1 << endl;
            }
            for (int i = 0; i < 2; i++) {
                cout << n - 1 << " " << n << endl;
            }
        }
        else {
            cout << 2 << endl;
            for (int i = 0; i < 2; i++) {
                cout << 1 << " " << n << endl;
            }
        }
    }
}