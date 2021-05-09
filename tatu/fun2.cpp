#include <iostream>
using namespace std;
int main(){
    int a,s=0;
    cin>>a;
    int arr[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>arr[i][j];            
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(arr[i][j]==1 && arr[j][i]==1) s++;        
        }
    }
    cout<<s\2;
}