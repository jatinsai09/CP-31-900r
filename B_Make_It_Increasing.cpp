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

        int flag = 1, op = 0;
        for (int i = n - 1; i > 0; i--) {
            if (v[i] == 0) {
                flag = 0;
                break;
            }
            while (v[i - 1] > 0 && v[i - 1] >= v[i]) {
                v[i - 1] /= 2;
                op++;
            }
        }
        if (flag) {
            cout << op << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}