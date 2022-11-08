#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t) {
		string s;
		cin >> s;
		for(int i {0}; i < (s.size())/2; i++) {
			cout << s.at(i);
		}
		cout << "\n";
	    --t;
	}
	return 0;
}