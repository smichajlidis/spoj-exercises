#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    
    int a, b, how_many {};
    string answer;
    
    do {
        cin >>how_many;
    } while (how_many < 1 || how_many > 10);
    
    getline(cin, answer);
    
    int array[how_many] {};
    
    for (int i {0}; i < how_many; i++) {
        do {
            getline(cin, answer);
            answer.push_back('a');
            a = stoi(answer.substr(0, answer.find_first_of(" ")));
            b = stoi(answer.substr(answer.find_first_of(" ") + 1, answer.find_first_of('a')-1));
        } while ((a || b) < 1 || (a || b) > 1000000000);
        
        if (a % 10 == 0)
            array[i] = 0;
        else if (a % 10 == 9) {
            if (b % 2 == 0)
                array[i] = 1;
            else 
                array[i] = 9;
        }
        else if (a % 10 == 8) {
            if (b%4 == 1)
                array[i] = 8;
            else if (b%4 == 2)
                array[i] = 4;
            else if (b%4 == 3)
                array[i] = 2;
            else if (b%4 == 0)
                array[i] = 6;
        }
        else if (a % 10 == 7) {
            if (b%4 == 1)
                array[i] = 7;
            else if (b%4 == 2)
                array[i] = 9;
            else if (b%4 == 3)
                array[i] = 3;
            else if (b%4 == 0)
                array[i] = 1;
        }
        else if (a % 10 == 6)
            array[i] = 6;
        else if (a % 10 == 5)
            array[i] = 5;
        else if (a % 10 == 4) {
            if (b % 2 == 0)
                array[i] = 6;
            else 
                array[i] = 4;
        }
        else if (a % 10 == 3) {
            if (b%4 == 1)
                array[i] = 3;
            else if (b%4 == 2)
                array[i] = 9;
            else if (b%4 == 3)
                array[i] = 7;
            else if (b%4 == 0)
                array[i] = 1;
        }
        else if (a % 10 == 2) {
            if (b%4 == 1)
                array[i] = 2;
            else if (b%4 == 2)
                array[i] = 4;
            else if (b%4 == 3)
                array[i] = 8;
            else if (b%4 == 0)
                array[i] = 6;
        }
        else if (a % 10 == 1) 
            array[i] = 1;
    }
    
    for (auto i: array)
        cout << i << "\n";
    
    return 0;
}