#include<iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    string a;
    int s;
    getline(cin, a);
    cin >> s;
    for (int i=0; a[i]!=47; i++)
    {
        int e=a[i];
        e+=s;
        a[i]=e;
    }
    cout << a;
}