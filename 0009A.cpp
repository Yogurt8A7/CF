#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int y, w;
	cin >> y >> w;
	int bal = max(y, w);
	if (bal == 1) {
		cout << "1/1" << "\n";
	}
	else if (bal == 2) {
		cout << "5/6" << "\n";
	}
	else if (bal == 3) {
		cout << "2/3" << "\n";
	}
	else if (bal == 4) {
		cout << "1/2" << "\n";
	}
	else if (bal == 5) {
		cout << "1/3" << "\n";
	}
	else {
		cout << "1/6" << "\n";
	}
	return 0;
}