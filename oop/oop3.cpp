#include<iostream>
#include <cmath>

using namespace std;

class coffe{
    private:
    bool voltage(){
        return 1;
    }
    public:
    void start(){
        if(voltage()){
            cout<<"pusk"<<endl;
        }
        else{
            cout<<"tiiiiiiit"<<endl;
        }
    }
};
int main(){
    int a;
    coffe start;
    cin>>a;
    if(a==1){
        start.start();
    }
    else{
        main();
    }
}