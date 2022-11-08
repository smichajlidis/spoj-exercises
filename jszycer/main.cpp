#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    string get {};
    string line {};
    while (getline(cin, get)){
        istringstream iss (get);
        while(iss >> line){
            for(auto &n: line){
                switch(n){
                    case 88: n='A'; break;
                    case 89: n='B'; break;
                    case 90: n='C'; break;
                    default: n+=3; break;
                }
            }
            cout << line << " ";
        }
    }
    return 0;
}