#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/339/A
Name: Helpful Maths
TC: O(n)
SC: O(n)
*/
int main () {
    string str;
    cin >> str;
    int len = str.length();
    string one, two, three;
    for(int i = 0; i < len; i++) {
        if (str[i] != '+') {
            if (str[i] == '1') one += "1+";
            else if (str[i] == '2') two += "2+";
            else if (str[i] == '3') three += "3+";
        }
    };
    string res = one + two + three;
    res.pop_back();
    cout<<res<<endl;
    return 0;
}