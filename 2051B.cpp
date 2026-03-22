#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
#define elif else if

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        ll s = a+b+c;
        ll d = n / s * 3;
        if (n%s == 0) {cout << d << "\n";}
        elif (n%s <= a) {cout << d+1 << "\n";}
        elif (n%s <= a+b) {cout << d+2 << "\n";}
        else {cout << d+3 << "\n";}
    }
    return 0;
}