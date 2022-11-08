#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    cin.ignore();
    string input, num;
    vector <int> vec;
    vector <int> later;
    getline(cin,input);
    istringstream iss (input);
    while(iss>>num){
        vec.push_back(stoi(num));
    }
    for(auto n: vec){
        if(k!=0) {
            later.push_back(n);
            --k;
        }
        else
            cout << n << " ";
    }
    for(auto n: later){
        cout << n << " ";
    }
    cout << endl;
    
    return 0;
}