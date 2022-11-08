#include <iostream>

using namespace std;

int main() {
	
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	int result {0}, x {};
		
	while (cin >> x) {
	    result+=x;
	    cout << result << "\n";
    }	
	
	return 0;
}
