#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	
	string n;
	string num;
	
	while (getline(cin, n)) {
		
		vector <string> result;
		
		istringstream iss( n );

        while( iss >> num ) {
             result.push_back(num);
        }
        
        for(size_t i {result.size()}; i >= 1; i--) {
        	cout << result.at(i-1) << " ";
		}
		cout << "\n";
	}
	return 0;
}
