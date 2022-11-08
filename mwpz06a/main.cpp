#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int d;
	cin >> d;
	while(d) {
	    double x,y,z;
		cin >>x>>y>>z;
		double result = abs(((y*z)-y-x)/(1-z));
		result*=12;
		cout << round(result) << endl;
		--d;
	}
	return 0;
}
