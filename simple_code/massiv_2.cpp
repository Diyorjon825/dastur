#include <iostream>

using namespace std;

int main(){
    int a[]{1,34,52,235,2354};
    for (int i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        cout << a[i] << endl;
    }
}