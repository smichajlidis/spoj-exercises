#include <iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    long long sum {0}, max {0};
    while(n--){
        int a;
        cin>>a;
        sum+=a;
        if(sum>max)
            max=sum;
        else if(sum<0)
            sum=0;
    }
    cout << max << endl;
    return 0;
}
