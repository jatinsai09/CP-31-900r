#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        bool res = false;
        if ((2 * b - c) % a == 0) {
            if ((2 * b - c) / a > 0) {
                res = true;
            }
        }
        if ((2 * b - a) % c == 0) {
            if ((2 * b - a) / c > 0) {
                res = true;
            }
        }
        
        if ((c + a) % (2 * b) == 0) {
            res = true;
        }

        if (res) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}