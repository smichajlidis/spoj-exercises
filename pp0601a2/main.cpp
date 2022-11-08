#include <iostream>

using namespace std;

int main() {
	
	int n, count {0};
	bool is {false}, first {false};
	
	do {
	cin >> n;
	cout << n << "\n";
	
	if (n == 42) {
		if (first == true) {
			if (is == false) {
			    ++count;
			    is = true;
			    first = true;
			}
	    }
		else {
			is = true;
			first = true;
		}
	}
	else {
		first = true;
		is = false;
	}
	
/*	cout << "count: " << count << "\n";
	cout << "first: " << first << "\n";
	cout << "is: " << is << "\n"; */
	} while (count < 3);
	return 0;
}
