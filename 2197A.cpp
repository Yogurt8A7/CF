#include <iostream>
#include <algorithm>
#include <cmath>
typedef long long ll;
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;

        ll cnt = 0;
        for (ll y = x; y <= x + 90; y++) {
            ll s = 0;
            ll temp = y;
            while (temp > 0) {
                s += temp%10;
                temp /= 10;
            }
            if (y - s == x) {
                cnt++;
        }
    }
        cout << cnt << "\n";
    }
    return 0;
}
