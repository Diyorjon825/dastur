#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, max;
    cin>>n;
    max=n;
    while(n!=0)
    {
      cin>>n;
      if(max<n)
        max=n;
    }
    cout << max;
}