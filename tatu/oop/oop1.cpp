#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

class odam{
public:
    int yoshi, ogirligi, buyi;
    string ismi, familiyasi, millati, irqi, sharfi;
    void hisobot(){
        cout<<"Ismi - "<<ismi<<"\n Familiyasi - "<<familiyasi<<"\n Sharfi - "<<sharfi<<"i \n yoshi - "<<yoshi<<"\n millati - "<<millati;
    }
};

int main(){
    odam obj1;
    cout<<"Familiyangiz-> "; cin>>obj1.familiyasi;
    cout<<"Ismingiz-> "; cin>>obj1.ismi;
    cout<<"Sarfingiz -> "; getline(cin,obj1.sharfi,'i');
    cout<<"yoshingiz-> "; cin>>obj1.yoshi;
    cout<<"millatingiz-> "; cin>>obj1.millati;
    cout<<"\n\n";
    obj1.hisobot();
}