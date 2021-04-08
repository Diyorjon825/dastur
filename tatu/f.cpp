#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="Samandar olmani yemadi, chunki olma vitaminlarga boy emas";
    s.replace(0,8,"Maqsud");
    s.replace(7,6,"behini");
    s.erase(16,2);
    cout<<s;
}