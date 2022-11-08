#include <iostream>

using namespace std;

int main() {
	
	int32_t x, y;
	char c;
	
	while(cin >> c >> x >> y) {
		
		switch (c) {
			case '+': cout << x+y << "\n"; break;
			case '-': cout << x-y << "\n"; break;
			case '/': cout << x/y << "\n"; break;
			case '*': cout << x*y << "\n"; break;
			case '%': cout << x%y << "\n"; break;
		}
	}	
	return 0;
}