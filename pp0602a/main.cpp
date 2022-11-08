#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t) {
		
		string result {};
		string num {};
		vector <string> odd {};
		getline(cin,result);
		istringstream iss ( result );
		bool first = false;
		bool oddis = true;
		
		while(iss >> num) {
			if(oddis == false && first == true) {
			    cout << num << " ";
			    first = true;
			    oddis = true;
			}
			else if (oddis == true && first == true) {
			    odd.push_back(num);
			    first = true;
			    oddis = false;
			}
			else
			    first = true;
		}
		for(auto n: odd) {
			cout << n << " ";
		}
		cout << "\n";
		--t;
	}
	return 0;
}
