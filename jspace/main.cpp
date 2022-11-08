#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string input, word;
    string result {};
    bool first {false};
    vector <string> vec;
    int i {0};
    while(getline(cin,input)) {
        istringstream iss (input);
        while(iss>>word){
            if(word[0]>96 && first == true)
                word[0]= word[0] - 32;
            result+=word;
            first = true;
        }
        vec.push_back(result);
        result.clear();
        ++i;
        first = false;
    }
    for(string n: vec){
        cout << n << endl;
    }
    cout << endl;
    return 0;
}