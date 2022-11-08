#include <iostream>
#include <string>

using namespace std;

string sys(int n, int value) {
	
	int podstawa {1};
	string result {};

	while (n >= podstawa) {
	    podstawa*=value;
	}
	podstawa/=value;
	while (podstawa != 0) {
	   switch (n/podstawa) {
	    	case 10: result+='A'; break;
	    	case 11: result+='B'; break;
	    	case 12: result+='C'; break;
	    	case 13: result+='D'; break;
	    	case 14: result+='E'; break;
	    	case 15: result+='F'; break;
	    	default: result+=to_string(n/podstawa); break;	
	    } 
            n = n%podstawa;
        podstawa/=value;
	}
	return result;
}

int main() {
	
	int t;
	cin >> t;
	while(t) {
		int n;
		cin >> n;
	    cout << sys(n,16) << " " << sys(n,11) << "\n";
	    --t;
	}
	return 0;
}
