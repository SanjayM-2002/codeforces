#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/281/A
Name: Word Capitalization
TC: O(1)
SC: O(1)
*/
int main () {
    string str;
    cin>> str;
    char a = str[0];
    str[0] = toupper(a);
    cout<<str<<endl;
    return 0;
}