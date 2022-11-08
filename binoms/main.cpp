#include <iostream>

unsigned long long factorial(long double);
unsigned long long newton(double, double);

int main() {
    int t {};
    std::cin>>t;
    while(t) {
        double n, k;
        std::cin>>n>>k;
        if (k>=n/2)
            k=n-k;
        std::cout<<newton(n,k)<<std::endl;
        --t;
	}
	return 0;
}

unsigned long long factorial(long double num) {
	if (num==1)
	    return 1;
	return num*factorial(num-1);
	}
unsigned long long newton( double n, double k) {
	if (k==0||k==n)
	    return 1;
	else
	    return ((n-k+1)*newton(n,k-1))/k; 
}
