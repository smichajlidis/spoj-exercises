#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while(t) {
        int l,k;
        int line {0};
        cin >> l >> k;
        cin.ignore();
        vector <string> matrix {};
        while(l) {
            
            string data;
            string num;
            int count {1};
            
            getline(cin,data);
            istringstream iss (data);
            
            
            while(iss >> num) {
                if (count == 1) {
                    if (l > 1)
                        matrix.push_back(num);
                    else {
                        matrix.at(line)+=" ";
                        matrix.at(line)+=num;
                    }    
                    ++count;
                }
                else if (count == 2) {
                    if (line == 0)
                        matrix.insert(matrix.begin()+line, num);
                    else {
                        matrix.at(line)+=" ";
                        matrix.at(line)+=num;
                    }
                    count++;
                }
                else if (count < k) {
                    matrix.at(line) += " ";
                    matrix.at(line) += num;
                    ++count;
                }
                else if (count == k && line > 0) {
                    matrix.at(line-1) += " ";
                    matrix.at(line-1)+=num;
                    ++line;
                }
                else {
                    matrix.at(line)+=" ";
                    matrix.at(line)+=num;
                    ++line;
                }
            }
             --l;
        }
    for (auto n: matrix) {
        cout << n << "\n";
    }
    --t;
    }
    return 0;
}