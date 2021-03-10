#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    long long a,s=0,m=0;
    cin>>a;
    long long arr[a+12];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr,arr+a);
    for(int i=0;i<a;i++){
        if(arr[i+1]-arr[0]>0){
            m++;
            if(arr[i+1]-arr[0]<1)
                continue;
            else
                s+=arr[i+1]-arr[0]-1-m;
        }
    }
    cout<<s;
}
    