#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;
  
int main () {
    srand(time(NULL));
    const int size=10;
    int arr[size], a;
    bool s;
    for (int i = 0; i < size;)
    {
        s=0;
        a=rand()%20;
        for (int b=0; b<i; b++)
        {
            if (a==arr[b])
                s=1;
                break;
        }
        if(!s){
            arr[i]=a;
            i++;
        }
    }
    for (int i=0; i<size; i++)
    cout << arr[i] << endl;
    int mn=arr[0];
    for (int i = 1; i < size; i++)
    {
        mn=min(mn, arr[i]);
    }
    cout << "min = " << mn << endl;
}