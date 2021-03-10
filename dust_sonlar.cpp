#include<iostream>
using namespace std;
int main(){
    int n, s1, s2, b;
    cin >> n;
    for (int a=0; a<n; a++)
    {
        s1 = 0;
        for (int i=1; i<a; i++)
        {
            if (a % i == 0)
                s1+=i;
        }
        for (b=1; b<=a; b++)
        {
            s2 = 0;
            for (int o=1; o<b; o++)
            {
                if (b%o==0)
                    s2+=o;
            }
            if (a==s2 && b==s1 && a!=b)
                cout << a << " va " << b << endl;
        }
    }
}