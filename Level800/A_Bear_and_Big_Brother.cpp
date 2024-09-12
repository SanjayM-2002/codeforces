#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/791/A
Name: Bear and Big Brother
TC: O(log(b/a))
SC: O(1)
*/
int main () {
    int a, b;
    cin >> a >> b;
    int y = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        y++;
    };
    cout<<y<<endl;
    return 0;
}