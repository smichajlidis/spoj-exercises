#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string all {};
    cin>>n;
    cin.ignore();
    while (n){
        string text;
        getline(cin, text);
        all+=text;
            --n;
    }
    int count {0};
    for (char c = 97; c <= 122; c++) {
        for (int i {0}; i < all.length(); i++) {
            if (all[i]==c)
                count++;
        }
        if (count > 0) {
            cout << c << " " << count << endl;
            count = 0;
        }
    }
    for (char c = 65; c <= 90; c++) {
        for (int i {0}; i < all.length(); i++) {
            if (all[i]==c)
                count++;
        }
        if (count > 0) {
            cout << c << " " << count << endl;
            count = 0;
        }
    }

    return 0;
}