#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string array;
	int t {};
	
	cin >> t;
	
	getline(cin, array);
	
	for(int j {0}; j < t; j++) {
	
	getline(cin, array);
	
	for(size_t i {array.size() - 1}; i > 1; i--) {
		if (array.at(i - 1) == 32) {
             cout << array.at(i) << array.at(i - 1);
             i--;
        }     
		else if (array.at(i - 1) != 32) {
		  cout << array.at(i-1) << array.at(i) << " ";
		  i-=2;
		}
	}
	cout << "\n";
	}
		
	return 0;
}
