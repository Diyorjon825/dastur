#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    for (int i=0; i<b; i++)
    {
        for (int o=0; o<a; o++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}