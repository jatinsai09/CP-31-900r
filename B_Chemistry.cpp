#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        map < char, int > mp;
        for (auto ch: s) {
            ++mp[ch];
        }

        int odds = 0;
        for (auto it: mp) {
            int f = it.second;
            if (f & 1) {
                odds++;
            }
        }

        if (k < odds - 1) {
            cout << "No\n";
        }
        else {
            cout << "Yes\n";
        }
    }
}