#include <iostream>
#include <string>

using namespace std;

int main() {

    int a, b, how_many;
    string answer {};

    do {
        cin >> how_many;
    } while (how_many < 1 || how_many > 20);
    
    getline(cin, answer);
    
    for (int i {0}; i < how_many; i++) {

                    getline(cin, answer);
                    answer.push_back('a');
                    a = stoi(answer.substr(0, answer.find_first_of(" ")));
                    b = stoi(answer.substr(answer.find_first_of(" ") + 1, answer.find_first_of('a')-1));
                    
                    if (a >= 10 && a <= 30 && b >= 10 && b <= 30) {
                        
                        for (int i {10}; i < 1000; i++) {
                            if (i%a == 0 && i%b == 0) {
                                cout << i << "\n";
                                i = 1001;
                            }
                        }    
                    }
    }
    
    return 0;
}