#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
	
	int t {};
	string n {};
	int first {};
	
	cin >> t;
	
	getline (cin,n);
	
	while (t) {
		
		//string n {};
		string num {};
		vector <int> result {};
		int count {0};
	//	int first {};
		
		getline(cin,n);
		
		std::istringstream iss (n);
		
		while (iss >> num) {
			
			if (count == 1)
			    first = stoi(num);
			else if (count != 0)
			    result.push_back(stoi(num));
			count++;
		}
		
		result.push_back(first);
		
		for(int n: result) {
			cout << n << " ";
		}
		cout << endl;
		
		t--;
	}
	
	return 0;
	
}
	
	
