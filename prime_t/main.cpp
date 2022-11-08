#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int how_many {};
    int prime_numbers[] {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    do {
        cin >> how_many;
    } while (how_many<1 || how_many>100000);
    bool answers[how_many] {};
    for (int i {0}; i < how_many; i++)
        answers[i] = 1;
    for(int i {0}; i<how_many; i++) {
        int num {};
        do {
        cin >> num;
        } while (num<1 || num>10000);
            int sqrtnum = ceil(sqrt(num));
            int j {0};
            do {
                if (num==1 || (num % prime_numbers[j] == 0 && num!=2)) {
                    answers[i] = 0;
                    break;
                }
                j++;
            } while (prime_numbers[j]<=sqrtnum && j<25);
    }
    for (int i: answers)
        if (i == 0)
            cout << "NIE" << "\n";
        else
            cout << "TAK" << "\n";
    return 0;
}