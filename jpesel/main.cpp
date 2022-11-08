#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t, length = 11, suma = 0;
    cin>>t;
    while(t){
        string pesel {};
        vector <int> vec {};
        cin>>pesel;
        for(int i {0}; i < length; i++){
            vec.push_back(pesel[i]-'0');
            switch(i+1){
                case 1:
                case 5:
                case 9:
                case 11:suma+=vec.at(i); break;
                case 2:
                case 6:
                case 10:suma+=vec.at(i)*3; break;
                case 3:
                case 7: suma+=vec.at(i)*7; break;
                case 4:
                case 8: suma+=vec.at(i)*9; break;
            }
        }
        if(suma>0 && suma%10==0)
            cout << "D\n";
        else
            cout << "N\n";
        --t;
        vec.clear();
        suma=0;
    }
    return 0;
}