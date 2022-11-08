#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    int d;
    cin>>d;
    while(d){
        int o;
        cin>>o;
        cin.ignore();
        string n;
        string num;
        int memory {};
        vector <int> vec {};
        getline(cin,n);
        istringstream iss (n);
        while(iss>>num) {
            vec.push_back(stoi(num));
        }
        sort(vec.begin(), vec.end());
        if (vec.size() > 1) {
            do {
                cout << vec.at(vec.size()-1) << " ";
                memory = vec.at(vec.size()-1);
                vec.pop_back();
            } while (vec.at(vec.size()-1) == memory && vec.at(vec.size()-1) != vec.at(0));
        }
        for (int i: vec) {
            cout << i << " ";
        }
        cout << endl;
        
        --d;
    }
    return 0;
}