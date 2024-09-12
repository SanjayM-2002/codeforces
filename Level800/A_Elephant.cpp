#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/617/A
Name: Elephant
TC: O(1)
SC: O(1)
*/
int main () {
    int x;
    cin >> x;
    int steps = 0;
    steps = x / 5;
    if (x % 5 != 0) steps++;
    cout << steps <<endl;
    return 0;
}