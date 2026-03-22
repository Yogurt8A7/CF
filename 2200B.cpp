#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <cstring>
#include <cmath>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define fi first
#define se second
#define pb push_back
#define forin(i, n) for(int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; 
    while (t--) {
        int n; cin >> n;
        vi a(n); for (auto &x:a) cin >> x;

        vi b = a;
        sort(all(a));
        if (b==a) {
            cout << n << "\n";
        }
        else cout << "1\n";
    }

    return 0;
}