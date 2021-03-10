#include <iostream>
using namespace std;
string fun (int a, int b){
    if(a%b==0)
        return "bo'linadi";
    else 
        return "bo'linmaydi";
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << a << " soni " << b << " soniga qoldiqsiz "<< fun(a, b) << endl;
}