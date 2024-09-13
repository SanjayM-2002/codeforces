#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/785/A
Name: Anton and Polyhedrons
TC: O(n)
SC: O(1)
*/
int main () {
    int n;
    cin >> n;
    int res = 0;
    unordered_map<string, int> m = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
    while (n--) {
        string s;
        cin >> s;
        res += m[s];
    };
    cout << res << endl;
    return 0;
}