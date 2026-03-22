#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
        int x, y, k; cin >> x >> y >> k;
        if (x==0 && y==0) cout << "0\n";
        else {
            auto nx = (x+k-1)/k;
            auto ny = (y+k-1)/k;
            if (nx > ny) cout << nx * 2 - 1 << "\n";
            else cout << ny * 2 << "\n";
        }
    }
    return 0;
}