#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
#define forin(i, n) for(int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n); for(auto &x:a) cin >> x;
        sort(all(a), greater<int>());
        vector<ll> prefix(n+1);
        for(int i = 1; i<=n; ++i){prefix[i] = prefix[i-1]+a[i-1];}
        while (q--){
            int x; cin >> x;
            auto it = lower_bound(prefix.begin(), prefix.end(), x);
            if (it == prefix.end()) {
                cout << "-1\n";
            }
            else {
                cout << it - prefix.begin() << "\n";
            }
        }
    }

    return 0;
}