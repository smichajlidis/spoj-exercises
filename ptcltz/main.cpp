#include <iostream>

using namespace std;

int collatz(int s, int n) {
	if (s == 1)
	    return n;
	else if (s % 2 == 0) {
		n++;
	    return collatz(s/2,n);
	}
	else {
		n++;
	    return collatz((3*s)+1,n);
	}
}

int main() {
	int t {};
	cin >> t;
	while (t) {
		int s {};
		cin >> s;
		cout << collatz(s,0) << endl;
		t--;
	}
	return 0;
}