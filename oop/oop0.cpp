#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;

class fclass{  //class yaratdik
    public:   //o'zgaruvchilarni ochiq qildik
        int a=1; // int turida atribut qushildi
        string b="Hello"; // string turida atribut qushildi

};

int main()
{
    fclass fobj;

    cin>>fobj.a;

    cout<<fobj.a;
}