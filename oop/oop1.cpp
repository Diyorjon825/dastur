#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;

class laptop{  //class yaratdik
    public:
    string model;
    string protsesspr;
    int ozu;
};

int main()
{
    laptop obj1;

        obj1.model="Acer";
        obj1.protsesspr="intel pentium";
        obj1.ozu=8;

    laptop obj2;
        obj2.model="MSI";
        obj2.protsesspr="AMD R5";
        obj2.ozu=16;

    cout<<obj1.model<<" "<<obj1.protsesspr<<" "<<obj1.ozu<<endl;
    cout<<obj2.model<<" "<<obj2.protsesspr<<" "<<obj2.ozu<<endl;
}