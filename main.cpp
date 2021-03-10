#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{   
    ifstream d;
            d.open("/home/diyorjon/coding/dastur/d.txt");
        string a, b;
            d >> a >> b;
    d.close();
    string l, p; 
    cout << "Login: "; cin >> l;
    cout << "parol: "; cin >> p;
        if (a == l && b == p)
            cout << "login to'g'ri, parol to'g'ri, siz tizimdasiz" << endl;
        else if (a != l && b == p)
            cout << "login noto'g'ri, parol to'g'ri" << endl;
        else if (a == l && b != p)
            cout << "login to'g'ri, parol noto'g'ri" << endl;
        else if (a != l && b != p)
            cout << "login noto'g'ri, parol noto'g'ri tizimga kiraolmaysiz" << endl;
}