#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double r {}, d {};

    cin >> r >> d;
    cout << fixed;
    cout << M_PI * ( pow(r, 2) - pow((0.5 * d), 2) ) << "\n";
    
    return 0;
}