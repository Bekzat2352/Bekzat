#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x1;
    int x2;
    int y1;
    int y2;
    int a1;
    int b1;
    int a2;
    int b2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>a1>>b1;
    cin>>a2>>b2;
    if ((max(x1, x2) < min(x1+a1, x2+a2)) && (max(y1, y2) < min(y1+b1, y2+b2))){
        cout<<"Прямоугольники пересекаются";
        }
    else{
        cout<<"Прямоугольники не пересекаются";
        }

}