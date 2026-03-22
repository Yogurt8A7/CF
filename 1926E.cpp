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
    while (t--) {
        int n, k; cin >> n >> k;
        int step = 1;
        while(true) {
            int a = (n/step+1)/2;
            if (k <= a) {
                cout << step * (k*2-1) << "\n"; break;
            }
            k -= a; step *= 2;
        }
    }

    return 0;
}