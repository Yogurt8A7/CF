#include <string>
#include <iostream>

using namespace std;

signed main() {
    string s;
    getline(cin, s);
    int cnt = 0;
    for (char c:s) {
        if (c == '4' || c == '7') {
            cnt++;
        }
    }
    if (cnt == 4 || cnt == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}