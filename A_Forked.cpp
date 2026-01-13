#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int a, b, ans = 0;
        cin >> a >> b;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        set < pair < int, int >> s1, s2;

        vector < pair < int, int >> dir = {
            {
                a,
                b
            },
            {
                a,
                -b
            },
            {
                -a,
                b
            },
            {
                -a,
                -b
            },
            {
                b,
                a
            },
            {
                b,
                -a
            },
            {
                -b,
                a
            },
            {
                -b,
                -a
            }
        };


        for (auto p: dir) {
            int x = xk + p.first;
            int y = yk + p.second;

            s1.insert(make_pair(x, y));

            x = xq + p.first;
            y = yq + p.second;

            s2.insert(make_pair(x, y));
        }

        for (auto p: s1) {
            if (s2.find(p) != s2.end()) {
                ans++;
            }
        }

        cout << ans << endl;
    }

}