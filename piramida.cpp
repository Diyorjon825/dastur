#include <iostream>
using namespace std;
int main(){
    int a, w; 
        cin >> a; 
    for (int i = 0, k = a; k >= 0; k--, i++)
    {
        for (int q=1; q<=k ; q++)
        {
            if (q<=10)
                cout << "  ";
            else
            cout << " ";
        }
        for (w = i; w >= 1; w--)
        {
            cout << w;
        }
        for (int j=2; j<=i; j++)
        {
                cout << j;
        }
        cout << endl; 
    }
}