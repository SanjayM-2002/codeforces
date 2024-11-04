#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool flag = false;

        for (int i = 0; i < n; i++) {
            if (str[i] == '1') {
                if (i == 0 || i == n - 1 || 
                   (i > 0 && str[i - 1] == '1') || 
                   (i < n - 1 && str[i + 1] == '1')) {
                    flag = true;
                    break;
                }
            }
        };
        string res = flag ? "YES" : "NO";

        cout << res << endl;
    }
}

int main() {
    int t;
    cin >> t;
    solve(t);
    return 0;
}
