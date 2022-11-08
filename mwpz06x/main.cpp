#include <iostream>

using namespace std;

int main() {
	int d;
	cin >> d;
	while(d) {
		int k;
		cin >> k;
		cout << k*k << endl;
		--d;
	}
	return 0;
}