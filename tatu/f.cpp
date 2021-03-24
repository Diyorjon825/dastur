#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main(){
    float x,y;
    cin>>x>>y;
    if(y>-1 && x>((y-2)/3) && x<(-((y-2)/3)))
        cout<<"yes";
    else
        cout<<"no";
}