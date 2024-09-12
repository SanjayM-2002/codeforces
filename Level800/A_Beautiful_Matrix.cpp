#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/263/A
Name: Beautiful Matrix
TC: O(1)
SC: O(1)
*/
int main () {
    int x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int val;
            cin >> val;
            if (val == 1) {
                x = i;
                y = j;
            };
        };
    };
    int mid = 2;
    int res = abs(x - 2) + abs(y - 2);
    cout<< res<< endl;
    return 0;
}