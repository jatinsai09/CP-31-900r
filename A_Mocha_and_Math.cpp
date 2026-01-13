#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        int mini;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i == 0) {
                mini = v[0];
            } else {
                mini = mini & v[i];
            }
        }
        
        cout << mini << endl;
    }
}