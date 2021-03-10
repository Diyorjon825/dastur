#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;
  
void fun(int x1, int y1, int x2, int y2)
{
    int x=abs(x1-x2);
    int y=abs(y1-y2);
    cout << "yuza = " << x*y << endl;
    cout << "piremetr = " << 2*(x+y) << endl;
}
int main () {
    int x1, x2, y1, y2;
    cout << "birinchi uchning kordinatalarini kiriting -> "; cin >> x1 >> y1;
    cout << "ikkinchi uchning kordinatalarini kiriting -> "; cin >> x2 >> y2;
    fun(x1, y1, x2, y2);
    cout << "birinchi uchning kordinatalarini kiriting -> "; cin >> x1 >> y1;
    cout << "ikkinchi uchning kordinatalarini kiriting -> "; cin >> x2 >> y2;
    fun(x1, y1, x2, y2);
}
