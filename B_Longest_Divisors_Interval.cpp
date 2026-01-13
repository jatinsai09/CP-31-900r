#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long res, i;

        for (i = 1;; i++) {
            if (n % i) {
                res = i - 1;
                break;
            }
        }
        cout << res << endl;
    }
}