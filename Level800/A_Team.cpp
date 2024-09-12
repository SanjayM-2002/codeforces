#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/231/A
Name: Team
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
 
    vector<vector<int>> problems(n, vector<int>(3));
 
    for (int i = 0; i < n; i++) {
        cin >> problems[i][0] >> problems[i][1] >> problems[i][2];
    }
 
    int res = 0;
 
    for (int i = 0; i < n; i++) {
        
        int sureFriends = problems[i][0] + problems[i][1] + problems[i][2];
 
        
        if (sureFriends >= 2) {
            res++;
        }
    }
 
    cout << res << endl;
    return 0;
}