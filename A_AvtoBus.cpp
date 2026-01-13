#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 || n < 4) {
            cout << -1 << endl;
        }
        else {
           cout << (n + 5) / 6 << " " << n / 4 << endl;
        }
    }
}