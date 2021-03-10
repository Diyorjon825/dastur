#include <iostream>
using namespace std;
int main(){
    int a, s;
    cin >> a;
    for (int i=2; i<a; i++)
    {
        s = 0;
        for (int y=1; y<=i; y++)
        {
            if (i % y== 0)
                s++;
        }
        if (s<=2)
            cout << i << endl;
    }
}