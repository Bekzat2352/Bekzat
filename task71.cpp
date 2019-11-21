#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int h;
    int m;
    double deg;
    cin>>h>>m;
    if (m>=0 && m<61 && h>0 && h<13) {
    double x,y,l;
    y=h*30;
    if(y>=180)
    {
    l=fabs(360.0-y);
    x=m*6;
    x=fabs(x-l);
    cout << x << endl;
    } else{
    x=m*6;
    deg=fabs(x-y);
    cout << deg << endl;  
    }
}
}