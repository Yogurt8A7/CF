#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

bool isquare(ll n)
{
    ll s = sqrt(n);
    if (s*s == n) return true;
    else return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) {cin >> x;}
        ll s = accumulate(a.begin(), a.end(), 0LL);
        if (isquare(s)) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}