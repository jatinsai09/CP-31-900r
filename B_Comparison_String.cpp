#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int c = 1, res = 1;
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == s[i]) {
                c++;
            }
            else {
                c = 1;
            }
            res = max(res, c);
        }
        cout << res + 1 << endl;
    }
}