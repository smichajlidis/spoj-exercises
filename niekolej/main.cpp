#include <iostream>

using namespace std;

int main() {
	long int n;
	long int odd {1};
	cin>>n;
	if (n==2 || n==1)
	    cout << "NIE";
	else if (n==3)
	    cout << "2 0 3 1";
	else {	
	    for(int i{0};i<=n;i++){
		    if (i*2<=n)
		        cout << i*2 << " ";
		    else {
			    cout << odd << " ";
			    odd+=2;
		    } 
	    }
	}
	return 0;
}
