#include <iostream>
#include <string>

using namespace std;

int nwd(int, int);

int main() {
   
    int t {};
    string answer {};
    
    cin >> t;
    
    getline(cin, answer);
    
    for (int i {0}; i < t; i++) {

        int a {}, b {}, temp {};
        
        cin >> a >> b;
        
        if (b > a) {
            temp = a;
            a = b;
            b = temp;
        }
        
        cout << nwd(a, b) << "\n";
    }
    
    return 0;
}

int nwd(int a, int b) {
    
    int rest {a % b};
    
    
    if (rest == 0)
        return b;
    else 
    return nwd(b, rest); 
}

   