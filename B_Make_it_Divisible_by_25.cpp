#include<bits/stdc++.h>

using namespace std;

int ops(string & last_two, string & num) {
    int x = last_two[0];
    int y = last_two[1];

    int steps = 0;

    long long j = num.size() - 1;
    while (j > 0 && num[j] != y) {
        --j;
        ++steps;
    }

    long long i = j - 1;
    while (i > 0 && num[i] != x) {
        --i;
        ++steps;
    }
    return steps;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        string str = to_string(n);

        vector < string > digits = {
            "00",
            "25",
            "50",
            "75"
        };
        int res = 1e9;

        for (auto& digit: digits) {
            int mini = ops(digit, str);
            res = min(res, mini);
        }
        cout << res << endl;
    }
}