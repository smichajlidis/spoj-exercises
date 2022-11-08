#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t) {
		string values {};
		string num {};
		vector <int> val {};
		bool first {false};
		int count {0};
		int result {999};
		double average {0};
		getline(cin,values);
		istringstream iss (values);
		while(iss >> num) {
			if (first == true) {
				val.push_back(stoi(num));
				average+=stoi(num);
				++count;
			}
			first = true;	
		}
	
	/*	cout << "suma: " << average << ", dzielnik: " << count;
		cout << ", liczby: ";
		for (auto n: val) {
			cout << n << " ";
		} */
		average/=count;
//		cout << "srednia: " << average << endl;
		
		
		for(auto n: val) {
			if (abs(n - average)<abs(result - average)) {
		//		cout << "jestem tu"<< endl;
				result = n;
			}
	/*		cout << "roznica miedzy srednia a n: " << abs(n-average) << endl;
			cout << "n: "<< n<< endl;
			cout << "result: " << result << endl; */
		}
		cout << result << endl;
		--t;
	}
	return 0;
}
