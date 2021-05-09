#include <iostream>
using namespace std;
int main(){
	int n,mn,l;
	cin>>n;
	int arr[n+1];
	mn=arr[0];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]<mn){
			mn=arr[i];
			l=i;
		}
	}
	swap(arr[n-1],arr[l]);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}