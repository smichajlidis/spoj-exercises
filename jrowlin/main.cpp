#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a,b,c;
    cin>>a>>b>>c;
    if (a==0 && b==c)
        cout <<"NWR\n";
    else if (a==0 && b!=c)
        cout<<"BR\n";
    else
        cout<<fixed<<setprecision(2)<<(c-b)/a<<endl;
    return 0;
}