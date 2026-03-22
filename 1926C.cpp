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

const int MAXN = 2e5;

int asumDigit[MAXN];
ll prefix[MAXN+1];

int sumDigit(int n) {
    int ans = 0;
    while (n>0) {
        ans += n%10;
        n/=10;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i=1; i<=MAXN; ++i) {
        asumDigit[i-1] = sumDigit(i);
        prefix[i]=prefix[i-1]+asumDigit[i-1];
    }
    int t;cin>>t; while (t--) {
        int n; cin >> n; cout << prefix[n] << "\n";
    }

    return 0;
}