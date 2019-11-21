#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a,b,c,x1,x2,d;
cin>>a>>b>>c;
d=(b*b)-(4*a*c);
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
cout<<d<<endl;
cout<<x1<<" "<<x2;
}