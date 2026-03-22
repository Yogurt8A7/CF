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
        int n; cin >> n;
        cin.ignore();
        string s; getline(cin, s);

        bool found = false;
        int x = 0, y = 0;
        for (char &c : s) {
            if (c == 'U') {y++;}
            else if (c == 'D') {y--;}
            else if (c == 'L') {x --;}
            else if( c == 'R') {x++;}

            if (x==1 && y==1) {found = true;}
        }
        if (found) {cout << "yes\n";}
        else cout << "no\n";
    }


    return 0;
}