#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/110/A
Name: Nearly Lucky Number
TC: O(digits)
SC: O(digits)
*/
int main () {
    long long num;
    cin >> num;
    int count = 0;
    while (num) {
        int dig = num % 10;
        if (dig == 4 || dig == 7)count++;
        num /= 10;
    };
    if (count == 4 || count == 7) cout<< "YES"<<endl;
    else cout<< "NO"<< endl;
    return 0;
}