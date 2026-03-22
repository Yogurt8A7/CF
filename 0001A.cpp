#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a;
    cin >> n >> m >> a;

    int row = (n + a - 1) / a;
    int col = (m + a - 1) / a;
    cout << row * col << endl;
    return 0;
}