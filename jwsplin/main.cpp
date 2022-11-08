#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t){
        int xA,yA,xB,yB,xC,yC;
        cin>>xA>>yA>>xB>>yB>>xC>>yC;
        if (((xB-xA)*(yC-yA))==((yB-yA)*(xC-xA)))
            cout<<"TAK\n";
        else
            cout<<"NIE\n";
        --t;
    }
    return 0;
}