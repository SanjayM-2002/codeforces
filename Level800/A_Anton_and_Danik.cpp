#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/734/A
Name: Anton and Danik
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    string str;
    cin >> n;
    cin >> str;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A' || str[i] == 'a') a++;
        else if (str[i] == 'D' || str[i] == 'd') d++;
        else continue;
    };
    if (a > d) cout <<"Anton"<<endl;
    else if (a < d) cout << "Danik" <<endl;
    else cout << "Friendship" <<endl;
    return 0;
}