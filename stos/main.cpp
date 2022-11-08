#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector <int> arr {};
	char c;
	int n;
	
    while (cin >> c) {  	
    	if (c == '+') {
    		cin >> n;
    		if (arr.size() < 10) {
    		    arr.push_back(n);
    		    cout << ":)\n";
    		}
    		else
    		    cout << ":(\n";
    	}
    	else if (c == '-') {
    		if (arr.size() == 0)
    		    cout << ":(\n";
    		else {
		        cout << arr.at(arr.size() - 1) << "\n";
		        arr.pop_back();
    		}
		}
		else
		   cout << ":(\n";
    }
	return 0;
}
