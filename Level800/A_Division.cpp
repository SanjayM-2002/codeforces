#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/1669/A
Name: Division?
TC: O(t)
SC: O(1)
*/
int main () {
    int t;
    cin >> t;
    while (t--) {
        int rating;
        cin >> rating;
        if (rating <= 1399) cout << "Division 4" << endl;
        else if (rating >= 1400 && rating <= 1599) cout << "Division 3" << endl;
        else if (rating >= 1600 && rating <= 1899) cout << "Division 2" << endl;
        else cout << "Division 1" << endl;
    };
    return 0;
}