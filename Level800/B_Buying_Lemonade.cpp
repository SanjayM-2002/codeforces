#include<bits/stdc++.h>
using namespace std;

int helper(int ctr, vector<int>&arr, int k) {
 int curr = 0;
 int n = arr.size();
 for (int i = 0; i < n; ++i) {
    curr += min(arr[i], arr[ctr]);
 }
 return curr >= k;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        int k; 
        cin >> k;
        vector<int>arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int idx = 0;
        int low = 0, high = n - 1;
        while (low <= high) {
            int ctr = low + (high - low) / 2;
            if (helper(ctr, arr, k)) {
                idx = ctr;
                high = ctr - 1;
            } else {
                low = ctr + 1;
            }
        }
        k += idx;
        cout << k << endl;
    }
    return 0;

}