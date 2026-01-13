#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, k;
        cin >> n >> k >> x;
        long long mins = 0, maxs = 0;
        mins = k * (k + 1) / 2;
        long long b = n - k;
        maxs -= b * (b + 1) / 2;
        maxs += n * (n + 1) / 2;


        if (x < mins || x > maxs) {
            cout << "No\n";
        }
        else {
            cout << "Yes\n";
        }
    }
}