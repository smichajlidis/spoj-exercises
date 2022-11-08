#include <iostream>

using namespace std;

int main() {
    int d;
    cin>>d;
    while(d) {
        int64_t l,c;
        cin>>l>>c;
        if(c==0)
            cout<<"NIE"<<endl;
        else if(l<=1)
            cout<<"TAK"<<endl;
        else {
            --l;
            int64_t result=c%l;
            if(result==0)
                cout<<"NIE"<<endl;
            else
                cout<<"TAK"<<endl;
        }
        --d;
    }
    return 0;
}