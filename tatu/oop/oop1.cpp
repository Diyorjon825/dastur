#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;

class uchburchak{
private:
    int a,b,c;
public:
    uchburchak(int newa, int newb, int newc){
        a=newa;
        b=newb;
        c=newc;
    }
private:
    double yuza(){
        double p=(a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    int p(){
        return a+b+c;
    }
public:
    void fun(){
        cout<< "Yuza = " <<yuza()<<"\n Pirenetr= "<<p();
    }
    
};

int main(){
    /*int a,b,c;
    cin>>a>>b>>c;
    uchburchak obj1(a,b,c);
    */
    cout<<sin(3.14159/6);
}