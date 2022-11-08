#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    
    int t, gluttons, cookies;
    float temp;
    
    cin >> t;
    
    while (t) {
        
        cin >> gluttons >> cookies;
        
        vector <float> amount {};
        
        while(gluttons) {
            
            cin >> temp;
            temp = floor(86400 / temp); 
            amount.push_back(temp);
            gluttons--;
            
        }
        
        temp = 0;
        
        for (auto i: amount)
            temp += i;
        
        cout << ceil(temp/cookies) << endl;
        
        t--;
        
    }
    
    return 0;
    
}