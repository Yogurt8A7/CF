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
int sum_from_1_to_k (int k)
{
    return k*(k+1)/2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int k = 1;
        int ans = 2;
        for (int x=2; x<=n; ++x) {
            k = max(k, n/x);
            if (sum_from_1_to_k(k)*x <= n) {
                ans = x;
                continue;
            }
            else {break;}
        }
        cout << ans << "\n";
    }

    return 0;
}