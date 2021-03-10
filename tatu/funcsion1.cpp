#include <iostream>
#include <cmath>

using namespace std;
void p3(float a, float b, float c){
    float p=(a+b+c)/2;
    cout << sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
    int w, e, r;
    float j;
    cin >> w >> e >> r;
    p3 (w, e, r);
}