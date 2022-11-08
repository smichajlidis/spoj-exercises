#include <iostream>

using namespace std;

int t, n, x;

int main()
{
  cin>>t;
  while(t)
  {
      int suma=0;
      cin>>n;
      while(n)
      {
          cin>>x;
          suma+=x;
          n--;
      }
      t--;
      cout<<suma<<endl;
  }

    return 0;
}
