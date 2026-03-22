#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define fi first
#define se second
#define forin(i, n) for(int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define pb push_back
const int MAXN = 1e5;
vector<int> bin_nums;
vector<int> satisfied_nums(MAXN+1, 0);

void precompute () {
    for(int i=2;i<64;++i) {
        int n=i; ll b_num = 0, p = 1;
        while (n>0) {
            if (n&1) {b_num += p;}
            p *= 10; n /= 2;
        }
        if (b_num <= int(1e5)) {bin_nums.pb((int)b_num);}
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();
    satisfied_nums[1] = 1;

    for (int i=0; i<=MAXN; ++i) {
        auto x = satisfied_nums[i];
        if (x == 1) {
            for (auto &b : bin_nums) {
                if (b*i <= MAXN) {
                    satisfied_nums[b*i] = 1;
                }
            }
        }
    }
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (satisfied_nums[n] == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}