#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;

        map < char, int > m1, m2;

        for (auto ch: s) {
            m1[ch]++;
        }
        for (auto ch: t) {
            m2[ch]++;
        }

        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                if (m1[s[i]] < m2[t[j]]) {
                    break;
                }
                if (m1[s[i]] == m2[t[j]]) {
                    m2[t[j++]]--;
                }
            }
            m1[s[i++]]--;
        }

        if (j == t.size()) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}