#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int n,m;
    int i {0};
    bool first {false};
    
    cin >> m >> n;
    cin.ignore();

    vector <string> matrix {};
    
    while(m) {
        
        string data;
        string num;
        
        getline(cin,data);
        istringstream iss (data);
        
        while(iss >> num) {
            if (first == true) {
                matrix.at(i)+=" ";
                matrix.at(i)+=num;
                ++i;
            }
            else
                matrix.push_back(num);
        }
        first = true;
        i = 0;
         --m;
    }
    
    for (auto n: matrix) {
        cout << n << "\n";
    }

    return 0;
}