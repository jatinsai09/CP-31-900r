#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        int l = -1, r = -1;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (v[i] != 0) {
                if (l == -1 && r == -1) {
                    l = r = i;
                }
                else {
                    r = i;
                }
            }
        }
        if (l == -1 && r == -1) {
            cout << 0 << endl;
        }
        else {
            int flag = 1;
            for (int i = l; i <= r; i++) {
                if (v[i] == 0) {
                    cout << 2 << endl;
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                cout << 1 << endl;
            }
        }
    }
}