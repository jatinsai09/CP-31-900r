#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector < long long > v(n);
        long long maxi = 0, mini = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            maxi = maxi + (v[i] / x) + (v[i] % x != 0);
        }
        mini = sum / x + (sum % x != 0);

        cout << mini << " " << maxi << endl;
    }
}