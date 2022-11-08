#include <iostream>

using namespace std;

int main() {
	
	double t,v1,v2;
	cin >> t;
	while(t) {
		cin >> v1 >> v2;
		cout << 2/((1/v1)+(1/v2)) << "\n";
	--t;
	}
	return 0;
}
