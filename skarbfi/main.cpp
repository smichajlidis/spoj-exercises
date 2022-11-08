#include <iostream>

using namespace std;

int main() {
	
	int D;
	
	cin >> D;
	
	while (D) {
		
		int r01 {0}, r23 {0};
		int n {};
		
		cin >> n;
		
		while (n) {
		
			int a {}, b {};
			
			cin >> a >> b;
			
			switch (a) {
				case 0: r01+=b;n--;break;
				case 1: r01-=b;n--;break;
				case 2: r23+=b;n--;break;
				case 3: r23-=b;n--;break;
			}	
		}	
		
		if (r01 == 0 && r23 == 0)
		    cout << "studnia\n";
		else {
			if (r01 != 0) {
				if (r01 > 0)
				    cout << "0 " << r01 << endl;
				else
				    cout << "1 " << r01*(-1) << endl;
			}
			if (r23 != 0) {
				if (r23 > 0)
				    cout << "2 " << r23 << endl;
				else
				    cout << "3 " << r23*(-1) << endl;
			}
		}
		
		r01 = 0;
		r23 = 0;
		D--;
		
	}
	
    return 0;
}