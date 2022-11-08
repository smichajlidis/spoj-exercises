#include <iostream>

using namespace std;

unsigned long long factorial(long double num) {
	
	if (num == 1)
	    return 1;
	return num * factorial(num - 1);
	}

unsigned long long newton( double n, double k) {
	
	if (k==0||k==n)
	    return 1;
	else
	    return ( (n-k+1) * newton(n,k-1) ) / k; 
}
unsigned long long newton2 (int n , int k ) {
	
	long long int result = 1;
	
	for (int i {k+1}; i <= n; i++) {
		result *= i;
	}
	
	result /= factorial(n-k);
	
	return result;
}


int main() {
	
	int t {};
	
	cin >> t;
	
	while(t) {
	
	    double n, k;
	
	    cin >> n >> k;
	
		
		if (k>=n/2)
		    k = n - k;
		
		cout << newton(n,k) << endl;
		
	//    cout << factorial(n) / ( factorial(k) * factorial(n-k) ) << endl;

	    t--;	
	}		
	return 0;
}
