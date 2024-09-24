#include <bits/stdc++.h>
using namespace std;
/* 
Link: https://codeforces.com/problemset/problem/2014/C
Name: Robin Hood in Town
TC: 
SC: 
*/
int main() {
    int t;
    cin >> t;
    const long long MAX_VAL = 2000000;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        int left = 0, right = MAX_VAL, x = -1;

        while (left <= right) {
            int curr = left + (right - left) / 2;

            vector<int> v = arr;
            v[n - 1] += curr;
            long long total = 0;
            for (int i = 0; i < v.size(); i++) {
                total += v[i];
            }
            double avg_wealth = (double)total / n;

            int counter = 0;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] < avg_wealth / 2.0) counter++;
            }

            if (counter > n / 2) {
                x = curr;
                right = curr - 1;
            } else {
                left = curr + 1;
            }
        }
        cout << x << endl;
    }
    return 0;
}