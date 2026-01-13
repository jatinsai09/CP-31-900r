#include<bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        int n = s.size();
        s[0] = s[n - 1];
        cout << s << endl;
    }
}