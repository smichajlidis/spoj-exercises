#include <iostream>

using namespace std;

int main() {
	
	int t {};
	
	cin >> t;
	
	while (t) {
		
		int a {}, b {};
		cin >> a >> b;
		
		do {
		    if (a > b)
		        a -= b;
		    else if (a < b)
		        b -= a;
		} while (a != b);
		
		cout << a+b << endl;	
		
	    t--;
	}
	
	return 0;
}
