#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << " " << 0 << endl;
        }
        else {
            if (a < b) {
                swap(a, b);
            }
            long long d = a - b;
            cout << d << " " << (min(b % d, d - (b % d))) << endl;
        }
    }
}