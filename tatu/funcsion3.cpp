#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;
  
void fun(int a, int c)
{
    int s=0, d=a;
    while(a>0){
        s++;;
        a/=10;
    }
    cout << d+(c*pow(10,s));
    
}
int main () {
    srand(time(NULL));
    int a, b, c;
    c=rand()%10;
    cin >> a;
    fun (a, c);
}