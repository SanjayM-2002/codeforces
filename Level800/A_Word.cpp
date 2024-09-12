#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/59/A
Name: Word
TC: O(n)
SC: O(1)
*/
int main () {
    string str;
    cin >> str;
    int n = str.length();
    int low = 0, up = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') low++;
        else up++;
    };
    if (up > low) {
        for (int i = 0; i < n; i++) {
            str[i] = toupper(str[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            str[i] = tolower(str[i]);
        }
    }
    cout << str << endl;
    return 0;
}