#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define int long long


using namespace std;
signed main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int val = abs(a[0] - a[n-1]); 
    pair<int, int> ans = {n, 1};
    for (int i = 0; i < n-1; i++) {
        int diff = abs(a[i] - a[(i+1)]);
        if (diff < val) {
            val = diff;
            ans = {i+1, i+2};
        }
    }
    cout << ans.first << " " << ans.second << "\n";
    return 0;
}