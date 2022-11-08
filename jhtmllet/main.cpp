#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string line;
    string temp {};
    vector <string> result;
    bool up = false;
    while (getline(cin, line)){
        for (char n: line){
            if (up == true && n >= 97 && n <= 122)
                n-=32;
            else if (n == '<')
                up = true;
            else if (n == '>')
                up = false;
            temp.push_back(n);
        }
      result.push_back(temp);
      temp.clear();
    }
    for(string n: result){
        cout << n << endl;
    }
    return 0;
}