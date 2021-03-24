#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;

class car{
public:
    int yili;
    string modeli;
    int max_tezligi;
};

int main(){
    car tesla;
    car BMW;
    tesla.max_tezligi=210;
    tesla.modeli="model s";
    tesla.yili=2016;
    BMW.max_tezligi=2018;
    BMW.modeli="x7";
    BMW.yili=2020;
    cout<<tesla.max_tezligi<<"\t"<<tesla.modeli<<"\t"<<tesla.yili<<"\n";
    cout<<BMW.max_tezligi<<"\t"<<BMW.modeli<<"\t"<<BMW.yili<<"\n";


}