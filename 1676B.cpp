#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define fi first
#define se second
#define forin(i, n) for(int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n); for(auto &x:a) {cin >> x;}
        if (n == 1) {cout << 0 << "\n";}
        else {
            sort(all(a));
            ll ans = 0;
            for (int i = 1; i < n; ++i) {
                ans += a[i]-a[0];
            }
            cout << ans << "\n";
        }
    }
    return 0;
}