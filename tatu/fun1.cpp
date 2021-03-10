#include<iostream>
#include <cmath>
using namespace std;

bool fun(int n, int k)
{
    int s=0;
    for (int i=1; pow(k,i)<=n; i++){
        if(pow(k,i)==n){
            s++;
            break;
        }
    }
    if(s>0){
            return 1;
        }
        else{
            return 0;
        }
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << fun(n,k) << endl;
}