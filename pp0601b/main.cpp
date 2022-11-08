#include <iostream>

using namespace std;

int main() {
	int t{};
	cin >> t;
	while(t) {
		int n,x,y;
		cin >> n >> x >> y;
		int temp {x};
		while (x<n) {
		if (x%y != 0)
			cout << x << " ";	
		x+=temp;	
		}
		cout << "\n";
		--t;
	}
	return 0;
}