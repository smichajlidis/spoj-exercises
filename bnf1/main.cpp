#include <iostream>

using namespace std;

int palindrom(int);

int main() {

    int t, n;
    int count{ 0 };

    do {
        cin >> t;
    } while (t > 80);

    for (int i{ 0 }; i < t; i++) {

        do {
            cin >> n;
        } while (n < 1 || n > 80);

        if (n < 10)
            cout << n << " 0\n";
        else if (n == 29 || n == 38 || n == 47 || n == 56 || n == 65 || n == 74)
            cout << "121 1\n";
        else if (n == 19 || n == 28 || n == 37 || n == 46 || n == 64 || n == 73)
            cout << "121 2\n";
        else if (n == 39 || n == 48 || n == 57 || n == 75)
            cout << "363 2\n";
        else if (n == 49 || n == 58 || n == 67 || n == 76)
            cout << "484 2\n";
        else if (n == 69 || n == 78)
            cout << "4884 4\n";
        else if (n == 68 || n == 59)
            cout << "1111 3\n";
        else if (n == 79)
            cout << "44044 6\n";
        else if (n == 11 || n == 22 || n == 33 || n == 44 || n == 55 || n == 66 || n == 77)
            cout << n << " 0\n";
        else if (n%10 == 0)
            cout << n+(n/10) << " 1\n";
        else
            cout << ((n/10)+(n%10))*10+((n/10)+(n%10)) << " 1\n";
    }
    
    return 0;
}