#include <iostream>

using namespace std;

int main() {

    int how_many{};

    do {
        cin >> how_many;
    } while (how_many < 1 || how_many > 50);

    string word{};

    for (int j{ 0 }; j < how_many; j++) {

        do {
            cin >> word;
        } while (word.length() < 1 || word.length() > 200);

        char character_1{ 'a' };
        int count{ 1 };

        for (size_t i{ 0 }; i < word.length(); i++) {

            if (word[i] != character_1 && count == 1) {
                character_1 = word[i];
                cout << word[i];
            }
            else if (word[i] != character_1 && count > 2) {
                cout << count;
                cout << word[i];
                character_1 = word[i];
                count = 1;
            }
            else if (word[i] != character_1 && count == 2) {
                cout << character_1;
                character_1 = word[i];
                cout << character_1;
                count = 1;
            }
            else if (word[i] == character_1) {

                if (i == word.length() - 1 && count > 1)
                    cout << ++count;
                else if (i == word.length() - 1 && count == 1)
                    cout << word[i];
                else if (count >= 0)
                    count++;
            }
        }
        if (j != how_many)
        cout << "\n";
    }
    return 0;
}
