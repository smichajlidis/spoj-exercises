#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main () {
	int how_many {};
    int number {};
    
    do {
        cin >> how_many;
    } while (how_many < 1 || how_many > 30);

    string numbers[how_many] {};
    
    for (int i {0}; i<how_many; i++) {
        do {
        cin >> number;
        } while (number < 0 || number > 1000000000);
        
        if (number > 9)
            numbers[i] = "0 0";
        else if (number == 0 || number == 1)
        	numbers[i] = "0 1";
        else if (number == 2)
        	numbers[i] = "0 2";
        else if (number == 3)
            numbers[i] = "0 6";
    	else if (number == 4)
        	numbers[i] = "2 4";
    	else if (number == 5 || number == 6 || number == 8)
        	numbers[i] = "2 0";
    	else if (number == 7)
        	numbers[i] = "4 0";
    	else if (number == 9)
        	numbers[i] = "8 0";
    }

    for (auto s: numbers)
        cout << s << "\n";
    
	return 0;
}