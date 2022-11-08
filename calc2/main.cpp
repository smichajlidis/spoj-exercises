#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> mem {0,0,0,0,0,0,0,0,0,0};
	int a,b;
	char c;
	while (cin >> c >> a >> b) {
		if (c == 'z')
			mem.at(a) = b;
		else {
		    switch(c) {
		    	case 'z': mem.at(a) = b; break;
		    	case '+': cout << mem.at(a)+mem.at(b); break;
		        case '-': cout << mem.at(a)-mem.at(b); break;
		        case '*': cout << mem.at(a)*mem.at(b); break;
		        case '/': cout << mem.at(a)/mem.at(b); break;
		        case '%': cout << mem.at(a)%mem.at(b); break;
		     } 
		     cout << "\n"; 
		 } 
	}
	return 0;
}