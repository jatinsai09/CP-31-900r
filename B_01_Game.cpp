#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int c1 = count(s.begin(), s.end(), '1');
        int c0 = s.length() - c1;

        int mini = min(c1, c0);

        if (mini & 1) {
            cout << "DA\n";
        }
        else {
            cout << "NET\n";
        }
    }
}